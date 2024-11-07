#include <stdio.h>

int main() {
    float hours_worked, hourly_wage, gross_pay, taxes, net_pay;

    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);

    printf("Enter hourly wage in Ksh: ");
    scanf("%f", &hourly_wage);

    // Calculate gross pay
    if (hours_worked > 40) {
        gross_pay = (40 * hourly_wage) + (hours_worked - 40) * 1.5 * hourly_wage;
    } else {
        gross_pay = hours_worked * hourly_wage;
    }

    // Calculate taxes
    if (gross_pay <= 600) {
        taxes = 0.15 * gross_pay;
    } else {
        taxes = 0.15 * 600 + 0.2 * (gross_pay - 600);
    }

    // Calculate net pay
    net_pay = gross_pay - taxes;

    printf("Gross Pay: Ksh %.2f\n", gross_pay);
    printf("Taxes: Ksh %.2f\n", taxes);
    printf("Net Pay: Ksh %.2f\n", net_pay);

    return 0;
}