
#include <stdio.h>

int main()
{
    float height;
    double bank_balance;
    char phone_number[20];

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your bank balance in KSh: ");
    scanf("%lf", &bank_balance);

    printf("Enter your phone number: ");
    scanf("%19s", phone_number);

    printf("\n--- USER DETAILS ---\n");
    printf("Height: %.2f meters\n", height);
    printf("Bank Balance: KSh %.2lf\n", bank_balance);
    printf("Phone Number: %s\n", phone_number);

    return 0;
}
