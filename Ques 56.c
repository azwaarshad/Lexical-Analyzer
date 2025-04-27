#include <stdio.h>

#define TAX_RATE 0.23 

int main(void) {
    double housing, food, clothing, transportation, education, healthcare, vacations;
    double total_expenses, fairtax;

    printf("Enter your expenses for the following categories:\n");
    printf("Housing: ");
    scanf("%lf", &housing);
    printf("Food: ");
    scanf("%lf", &food);
    printf("Clothing: ");
    scanf("%lf", &clothing);
    printf("Transportation: ");
    scanf("%lf", &transportation);
    printf("Education: ");
    scanf("%lf", &education);
    printf("Healthcare: ");
    scanf("%lf", &healthcare);
    printf("Vacations: ");
    scanf("%lf", &vacations);

    total_expenses = housing + food + clothing + transportation + education + healthcare + vacations;
    fairtax = total_expenses * TAX_RATE;

    printf("Your estimated FairTax is: $%.2f\n", fairtax);

    return 0;
}
