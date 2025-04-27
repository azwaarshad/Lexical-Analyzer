//Identify and correct the errors in each of the following.
//[Note: There may be more than oneerror in each piece of code.]

// a)
/*if(sales => 5000)
puts( "Sales are greater than or equal to $5000" )
else 
puts( "Sales are less than $5000 ) */

//CORRECT:
/*if(sales >= 5000)
	puts( "Sales are greater than or equal to 5000" )
else 
	puts( "Sales are less than 5000 ) */

// b)
/*int x = 1, product = 0;
while ( x <= 10 ); {  
   product *= x;  
   ++x;
} */

//CORRECT:
/*int x = 1, product = 0;
while (x <= 10){  
	product *= x;  
    ++x;
} */

// c)
/*While ( x <= 100 )  
   total =+ x;  
   ++x; */
   
//CORRECT:
/*While (x <= 100){ 
   total += x;  
   ++x;
} */
