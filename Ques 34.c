#include <stdio.h>
int main(){
	int num1, num2, num3;
    int sum, prod, smallest, largest;
    float average;
   
   printf("Enter three different integers: ");
   scanf("%d %d %d", &num1, &num2, &num3);

   sum = num1 + num2 + num3;
   prod = num1 * num2 * num3;
   average = (float)sum / 3;

   if (num1 < num2 && num1 < num3) {
      smallest = num1;
   } else if (num2 < num1 && num2 < num3) {
      smallest = num2;
   } else {
      smallest = num3;
   }

   if (num1 > num2 && num1 > num3) {
      largest = num1;
   } else if (num2 > num1 && num2 > num3) {
      largest = num2;
   } else {
      largest = num3;
   }

   printf("\nSum is: %d", sum);
   printf("\nAverage is: %.2f", average);
   printf("\nProduct is: %d", prod);
   printf("\nSmallest is: %d", smallest);
   printf("\nLargest is: %d\n", largest);
   
   return 0;
}

