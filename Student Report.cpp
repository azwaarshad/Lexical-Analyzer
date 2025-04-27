#include <iostream>
using namespace std;

int main(){
	float PF, ICT, Calculus, Eng, Pst, Total, Avg, Percent;
	printf("Enter marks of PF:\n");
	scanf("%f", &PF);
	printf("Enter marks of ICT:\n");
	scanf("%f", &ICT);
	printf("Enter marks of Calculus:\n");
	scanf("%f", &Calculus);
	printf("Enter marks of English:\n");
	scanf("%f", &Eng);
	printf("Enter marks of Pst:\n");
	scanf("%f", &Pst);
	Total = PF + ICT + Calculus + Eng + Pst;
	Avg = Total/5;
	Percent = (Total/500)*100;
	printf("----------Student report----------\n");
	printf("Marks in PF out of 100 are: %f\n", PF);
	printf("Marks in ICT out of 100 are: %f\n", ICT);
	printf("Marks in Calculus out of 100 are: %f\n", Calculus);
	printf("Marks in Eng out of 100 are: %f\n", Eng);
	printf("Marks in Pst out of 100 are: %f\n", Pst);
	printf("Total marks out of 500 are: %f\n", Total);
	printf("Average is: %f\n", Avg);
	printf("Peercentage is: %f", Percent);
	return 0;
}
