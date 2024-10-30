
//program to find 
/*
Name:Lawrence Kipruto Koskei
*/
//preprocessor directive
#include <stdio.h>
int main() {
    int customerID, units;
    char customerName[50];
    float charge_per_unit = 0, total_amount = 0, surcharge = 0;
    //enter customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);
    
    for (int i = 0; i <= units; i++) {
        if (i <= 199) {
            charge_per_unit = 1.20;
        } else if (i <= 399) {
            charge_per_unit = 1.50;
        } else if (i <= 599) {
            charge_per_unit = 1.80;
        } else {
            charge_per_unit = 2.00;
        }

        total_amount += charge_per_unit;
    }

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
    printf("Charges per Unit: %.2f\n", charge_per_unit);
    printf("Total Amount to Pay: %.2f\n", total_amount);

    return 0;
}
