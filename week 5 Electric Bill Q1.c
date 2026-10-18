// Paul guthera
//CT100/G/30675/26


#include <stdio.h>

float calculateElectricBill(float units);

int main()
{
    float units, bill;

    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    bill = calculateElectricBill(units);

    printf("\n");
    printf("Electiric Bill \n");
    printf("=====================");
    printf("Units consumed: %.2f\n", units);
    printf("Total bill: KSh. %.2f\n", bill);
    printf("==========\n");

    return 0;
}

float calculateElectricBill(float units)
{
    float bill;

    if (units <= 100)
    {
        bill = units * 10;
    }
    else if (units <= 200)
    {
        bill = (100 * 10) + ((units - 100) * 15);
    }
    else if(units>200)
    {
        bill = (100 * 10) + (100 * 15)
             + ((units - 200) * 20);
    }

    return bill;
}
