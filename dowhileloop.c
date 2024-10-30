/*
Name: Lawrence Kipruto koskei
*/
//preprocessor directive
#include <stdio.h>
int main() {
    int customerID, units, remaining_units;
    char customerName[50];
    float charge_per_unit = 0, total_amount = 0, surcharge = 0;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    remaining_units = units;

    do {
        if (remaining_units > 600) {
            total_amount += (remaining_units - 600) * 2.00;
            remaining_units = 600;
        } else if (remaining_units > 400) {
            total_amount += (remaining_units - 400) * 1.80;
            remaining_units = 400;
        } else if (remaining_units > 200) {
            total_amount += (remaining_units - 200) * 1.50;
            remaining_units = 200;
        } else {
            total_amount += remaining_units * 1.20;
            remaining_units = 0;
        }
    } while (remaining_units > 0);

    if (total_amount < 100) {
        total_amount = 100;
    }

    if (total_amount > 400) {
        surcharge = total_amount * 0.15;
        total_amount += surcharge;
    }

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", units);
    printf("Total Amount to Pay: %.2f\n", total_amount);

    return 0;
}
