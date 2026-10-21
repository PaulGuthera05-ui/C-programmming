//paul guthera
//CT100/G/30675/26

#include <stdio.h>

float calculateFare(float distance);

int main()
{
    float distance, fare;

    printf("Enter distance traveled in kilometers\t");
    scanf("%f", &distance);

    fare = Fare*distance;

    printf("Total fare%.2f\n", fare);

    return 0;
}

float calculateFare(float distance)
{
    return distance ;
}
