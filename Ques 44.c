#include <stdio.h>

#define BASE_SALARY 200.0
#define COMMISSION_RATE 0.09

int main()
{
    double sales, commission, earnings;

    printf("Enter the sales for last week: ");
    scanf("%lf", &sales);

    commission = sales * COMMISSION_RATE;
    earnings = BASE_SALARY + commission;

    printf("Commission: $%.2f\n", commission);
    printf("Earnings: $%.2f\n", earnings);

    return 0;
}
