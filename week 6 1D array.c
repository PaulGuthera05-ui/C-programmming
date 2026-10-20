
// Paul Guthera
// CT100/G/30675/26

#include <stdio.h>

int main()
{
     int i;
    int revenue[7], total = 0, average;

    printf("WEEKLY REVENUE TRACKER\n");

    for (i = 0; i < 7; i++)
    {
        printf("Enter revenue for day %d \t ");
        scanf("%f", &revenue[i]);

        total = total + revenue[i];
        average = total / 7;

    }

    printf("\n");
    printf("========================\n");
    printf("Weekly Revenue Tracker\n");
    printf("========================\n");
    printf("Total weekly revenue: KES %f\n", total);
    printf("Average daily revenue: KES %f\n", average);

    return 0;
}
