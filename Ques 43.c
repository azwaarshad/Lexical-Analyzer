#include <stdio.h>
#include <math.h>

int main()
{
    int account_number, mortgage_term;
    float mortgage_amount, interest_rate, total_interest, total_amount, monthly_payment;
    
    printf("Enter account number: ");
    scanf("%d", &account_number);
    printf("Enter mortgage amount: ");
    scanf("%f", &mortgage_amount);
    printf("Enter mortgage term (in months): ");
    scanf("%d", &mortgage_term);
    printf("Enter interest rate (as a decimal): ");
    scanf("%f", &interest_rate);
    
    total_interest = mortgage_amount * interest_rate * mortgage_term;
    total_amount = mortgage_amount + total_interest;
    
    monthly_payment = round(total_amount / mortgage_term);
    
    printf("\nCustomer account number: %d\n", account_number);
    printf("Total interest payable: $%.2f\n", total_interest);
    printf("Total amount payable: $%.2f\n", total_amount);
    printf("Required monthly payment: $%.0f\n", monthly_payment);
    
    return 0;
}
