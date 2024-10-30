/*
Name: Lawrence Kipruto Koskei
*/
//preprocessor directive
#include <stdio.h>
int main() {
    int customers, bills, customerID[50], units[50][50], remaining_units;
    char customerName[50][50];
    float total_amount, surcharge;

    printf("Enter number of customers: ");
    scanf("%d", &customers);
    printf("Enter number of bills per customer: ");
    scanf("%d", &bills);

    for (int i = 0; i < customers; i++) {
        printf("\nEnter Customer %d ID: ", i + 1);
        scanf("%d", &customerID[i]);
        printf("Enter Customer %d Name: ", i + 1);
        scanf("%s", customerName[i]);
        
        for (int j = 0; j < bills; j++) {
            printf("Enter Units Consumed for Bill %d: ", j + 1);
            scanf("%d", &units[i][j]);
        }
    }

    for (int i = 0; i < customers; i++) {
        for (int j = 0; j < bills; j++) {
            total_amount = 0;
            remaining_units = units[i][j];

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

            if (total_amount < 100) total_amount = 100;
            if (total_amount > 400) total_amount += total_amount * 0.15;

            printf("\nCustomer ID: %d, Bill %d\n", customerID[i], j + 1);
            printf("Customer Name: %s\n", customerName[i]);
            printf("Units Consumed: %d\n", units[i][j]);
            printf("Total Amount to Pay: %.2f\n", total_amount);
        }
    }
    return 0;
}
