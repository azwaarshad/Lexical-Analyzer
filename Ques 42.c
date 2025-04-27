#include <stdio.h>

#define STATE_TAX 0.04
#define COUNTY_TAX 0.05

int main() {
    double total_sales, state_tax, county_tax;
    
    printf("Enter total sales for the month: ");
    scanf("%lf", &total_sales);
    
    state_tax = total_sales * STATE_TAX;
    county_tax = total_sales * COUNTY_TAX;
    
    printf("State tax: $%.2f\n", state_tax);
    printf("County tax: $%.2f\n", county_tax);
    
    return 0;
}

