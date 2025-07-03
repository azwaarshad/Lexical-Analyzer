CREATE DATABASE SportsAnalyticsDB;
GO

USE SportsAnalyticsDB;
GO

CREATE TABLE Teams (
    team_id INT PRIMARY KEY IDENTITY(1,1),
    team_name VARCHAR(100) UNIQUE NOT NULL,
    region VARCHAR(100)
);
GO

CREATE TABLE Tournaments (
    tournament_id INT PRIMARY KEY IDENTITY(1,1),
    tournament_name VARCHAR(100) UNIQUE NOT NULL,
    type VARCHAR(50),
    host_country VARCHAR(100),
    start_date DATE,
    end_date DATE
);
GO

CREATE TABLE Matches (
    match_id INT PRIMARY KEY IDENTITY(1,1),
    match_date DATE,
    home_team_id INT,
    away_team_id INT,
    home_score INT,
    away_score INT,
    tournament_id INT,
    city VARCHAR(100),
    country VARCHAR(100),
    neutral BIT,
    FOREIGN KEY (home_team_id) REFERENCES Teams(team_id),
    FOREIGN KEY (away_team_id) REFERENCES Teams(team_id),
    FOREIGN KEY (tournament_id) REFERENCES Tournaments(tournament_id)
);
GO

CREATE TABLE RawMatches (
    match_date DATE,
    home_team VARCHAR(100),
    away_team VARCHAR(100),
    home_score INT,
    away_score INT,
    tournament VARCHAR(100),
    city VARCHAR(100),
    country VARCHAR(100),
    neutral BIT
);
GO

ALTER TABLE RawMatches
ALTER COLUMN [neutral] VARCHAR(100);

ALTER TABLE RawMatches
ALTER COLUMN match_date DATE NULL;

BULK INSERT RawMatches
FROM 'D:\Computer Science\Database Management System (Lab)\raw_matches_cleaned.csv'
WITH (
    FIRSTROW = 2,
    FIELDTERMINATOR = ',',
    ROWTERMINATOR = '\n',
    CODEPAGE = '65001',
    MAXERRORS = 1000,
    KEEPNULLS,
    TABLOCK
);
GO

INSERT INTO Teams (team_name)
SELECT DISTINCT home_team FROM RawMatches
UNION
SELECT DISTINCT away_team FROM RawMatches;
GO

INSERT INTO Tournaments (tournament_name)
SELECT DISTINCT tournament FROM RawMatches;
GO

INSERT INTO Matches (match_date, home_team_id, away_team_id, home_score, away_score, tournament_id, city, country, neutral)
SELECT 
    rm.match_date,
    ht.team_id,
    at.team_id,
    rm.home_score,
    rm.away_score,
    t.tournament_id,
    rm.city,
    rm.country,
    CASE 
        WHEN LOWER(rm.neutral) = 'true' THEN 1
        WHEN LOWER(rm.neutral) = 'false' THEN 0
        ELSE NULL -- or 0 if you want to default
    END AS neutral
FROM RawMatches rm
JOIN Teams ht ON RTRIM(LTRIM(rm.home_team)) = RTRIM(LTRIM(ht.team_name))
JOIN Teams at ON RTRIM(LTRIM(rm.away_team)) = RTRIM(LTRIM(at.team_name))
JOIN Tournaments t ON RTRIM(LTRIM(rm.tournament)) = RTRIM(LTRIM(t.tournament_name));
GO

/*Sample Queries*/

/*Highest scoring matches*/
SELECT TOP 5 
    m.match_id,
    ht.team_name AS home_team,
    at.team_name AS away_team,
    m.home_score,
    m.away_score,
    (m.home_score + m.away_score) AS total_goals
FROM Matches m
JOIN Teams ht ON m.home_team_id = ht.team_id
JOIN Teams at ON m.away_team_id = at.team_id
ORDER BY total_goals DESC;
GO

/*Teams with most matches played*/
SELECT TOP 10
    t.team_name,
    COUNT(*) AS matches_played
FROM Teams t
JOIN Matches m ON t.team_id = m.home_team_id OR t.team_id = m.away_team_id
GROUP BY t.team_name
ORDER BY matches_played DESC;
GO

/*Teams with most wins*/
SELECT TOP 10
    t.team_name,
    COUNT(*) AS wins
FROM Teams t
JOIN Matches m ON (t.team_id = m.home_team_id AND m.home_score > m.away_score)
              OR (t.team_id = m.away_team_id AND m.away_score > m.home_score)
GROUP BY t.team_name
ORDER BY wins DESC;
GO

/*Tournamnets with most matches played*/
SELECT TOP 5
    t.tournament_name,
    COUNT(m.match_id) AS matches_played
FROM Tournaments t
JOIN Matches m ON t.tournament_id = m.tournament_id
GROUP BY t.tournament_name
ORDER BY matches_played DESC;
GO

/*Average goals per match by tournamnet*/
SELECT
    t.tournament_name,
    AVG(CAST(m.home_score + m.away_score AS FLOAT)) AS avg_goals_per_match
FROM Tournaments t
JOIN Matches m ON t.tournament_id = m.tournament_id
GROUP BY t.tournament_name
ORDER BY avg_goals_per_match DESC;
GO

/*Cities hosting most matches*/
SELECT TOP 10
    city,
    COUNT(*) AS matches_hosted
FROM Matches
GROUP BY city
ORDER BY matches_hosted DESC;
GO

/*Teams with most draws*/
SELECT TOP 10
    t.team_name,
    COUNT(*) AS draws
FROM Teams t
JOIN Matches m ON (t.team_id = m.home_team_id OR t.team_id = m.away_team_id)
WHERE m.home_score = m.away_score
GROUP BY t.team_name
ORDER BY draws DESC;
GO

/*Highest scoring match in each tournament*/
WITH MatchGoals AS (
    SELECT
        m.match_id,
        m.tournament_id,
        (m.home_score + m.away_score) AS total_goals
    FROM Matches m
)
SELECT
    t.tournament_name,
    mg.match_id,
    mg.total_goals
FROM MatchGoals mg
JOIN Tournaments t ON mg.tournament_id = t.tournament_id
WHERE mg.total_goals = (
    SELECT MAX(total_goals) FROM MatchGoals WHERE tournament_id = mg.tournament_id
)
ORDER BY t.tournament_name;
GO

/*Count of matches played by year*/
SELECT
    YEAR(match_date) AS match_year,
    COUNT(*) AS matches_played
FROM Matches
GROUP BY YEAR(match_date)
ORDER BY match_year;
GO

/*Teams with highest average goals per match*/
SELECT TOP 10
    t.team_name,
    CAST(SUM(CASE WHEN m.home_team_id = t.team_id THEN m.home_score
                  WHEN m.away_team_id = t.team_id THEN m.away_score
             END) AS FLOAT) / COUNT(*) AS avg_goals_per_match
FROM Teams t
JOIN Matches m ON t.team_id = m.home_team_id OR t.team_id = m.away_team_id
GROUP BY t.team_name
ORDER BY avg_goals_per_match DESC;
GO

/*Win percentage of each team (for teams with at least 10 matches)*/
SELECT
    t.team_name,
    COUNT(*) AS matches_played,
    SUM(CASE
        WHEN t.team_id = m.home_team_id AND m.home_score > m.away_score THEN 1
        WHEN t.team_id = m.away_team_id AND m.away_score > m.home_score THEN 1
        ELSE 0
    END) AS wins,
    ROUND(
        CAST(SUM(CASE
            WHEN t.team_id = m.home_team_id AND m.home_score > m.away_score THEN 1
            WHEN t.team_id = m.away_team_id AND m.away_score > m.home_score THEN 1
        END) AS FLOAT) * 100 / COUNT(*), 2
    ) AS win_percentage
FROM Teams t
JOIN Matches m ON t.team_id = m.home_team_id OR t.team_id = m.away_team_id
GROUP BY t.team_name
HAVING COUNT(*) >= 10
ORDER BY win_percentage DESC;
GO

/*Matches between two specific teams (Brazil and Argentina*/
SELECT
    m.match_date,
    ht.team_name AS home_team,
    at.team_name AS away_team,
    m.home_score,
    m.away_score,
    t.tournament_name,
    m.city,
    m.country
FROM Matches m
JOIN Teams ht ON m.home_team_id = ht.team_id
JOIN Teams at ON m.away_team_id = at.team_id
JOIN Tournaments t ON m.tournament_id = t.tournament_id
WHERE (ht.team_name = 'Brazil' AND at.team_name = 'Argentina')
   OR (ht.team_name = 'Argentina' AND at.team_name = 'Brazil')
ORDER BY m.match_date DESC;
GO










