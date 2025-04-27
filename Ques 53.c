#include <stdio.h>

int main(void) {
    int paycode;
    double weekly_pay;

    while (1) {
        printf("Enter employee paycode (1=manager, 2=hourly, 3=commission, 4=pieceworker, 0=exit): ");
        scanf("%d", &paycode);

        if (paycode == 0) {
            break;
        }

        switch (paycode) {
            case 1: // manager
                printf("Enter manager's weekly salary: ");
                scanf("%lf", &weekly_pay);
                break;
            case 2: // hourly worker
                {
                    double hourly_wage, hours_worked, overtime_pay;
                    printf("Enter hourly worker's hourly wage: ");
                    scanf("%lf", &hourly_wage);
                    printf("Enter hours worked by hourly worker: ");
                    scanf("%lf", &hours_worked);
                    overtime_pay = hours_worked > 40 ? (hours_worked - 40) * 1.5 * hourly_wage : 0;
                    weekly_pay = hours_worked <= 40 ? hours_worked * hourly_wage : 40 * hourly_wage + overtime_pay;
                }
                break;
            case 3: // commission worker
                {
                    double gross_sales;
                    printf("Enter commission worker's gross weekly sales: ");
                    scanf("%lf", &gross_sales);
                    weekly_pay = 250 + 0.057 * gross_sales;
                }
                break;
            case 4: // pieceworker
                {
                    double pieces_produced, piece_rate;
                    printf("Enter pieceworker's number of pieces produced: ");
                    scanf("%lf", &pieces_produced);
                    printf("Enter pieceworker's rate per piece: ");
                    scanf("%lf", &piece_rate);
                    weekly_pay = pieces_produced * piece_rate;
                }
                break;
            default:
                printf("Invalid paycode. Please try again.\n");
                continue;
        }

        printf("Weekly pay for employee is $%.2lf\n", weekly_pay);
    }

    return 0;
}
