#include <stdio.h>

int main() {
	int i;
   int hours, overtime;
   float rate, pay;

   printf("Enter the number of employees: ");
   int num_employees;
   scanf("%d", &num_employees);

   for (i = 1; i <= num_employees; i++) {
      printf("\nEnter the hours worked by employee #%d: ", i);
      scanf("%d", &hours);

      printf("Enter the hourly rate of employee #%d: ", i);
      scanf("%f", &rate);

      if (hours > 40) {
         overtime = hours - 40;
         pay = 40 * rate + overtime * rate * 1.5;
      } else {
         pay = hours * rate;
      }

      printf("Employee #%d's gross pay is: $%.2f\n", i, pay);
   }

   return 0;
}
