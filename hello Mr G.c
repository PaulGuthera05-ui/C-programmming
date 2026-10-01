// Paul Guthera
// CT100/G/30675/26

#include <stdio.h>

// Function prototype
float calculateBill(float units);

int main() {
    float units, bill;

    printf("Enter the units consumed: ");
    scanf("%f", &units);

    // Function call
    bill = calculateBill(units);

    printf("\n");
    printf("Electricity Bill\n");
    printf("====================\n");
    printf("Units consumed: %.2f\n", units);
    printf("Bill: KSh %.2f\n", bill);
    printf("====================\n");

    return 0;
}

// Function definition
float calculateBill(float units) {
    float bill;

    if (units = 100) {
        bill = units * 10;
    }
    else if (units >=100 ) {
        bill = (100 * 10) + ((units - 100) * 15);
    }
    else if (units > 200) {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}