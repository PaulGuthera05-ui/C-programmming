
 // Paul Guthera
// CT100/G/30675/26

#include <stdio.h>

float calculateWaterBill(float units);

int main()
{
    float units, bill;

    printf("Enter the number of water units consumed");
    scanf("%f", &units);

    bill = calculateWaterBill(units);

    printf("\n");
    printf("================\n");
    printf("Program for Water Bill\n");
    printf("Units consumed %.2f\n", units);
    printf("Total bill KES %.2f\n", bill);

    return 0;
}

float calculateWaterBill(float units)
{
    float bill;

    if (units <= 30)
    {
        bill = units * 20;
    }
    else if (units <= 60)
    {
        bill = units * 25;
    }
    else if (units>60);
    {
        bill = units * 30;
    }

    return bill;
}
