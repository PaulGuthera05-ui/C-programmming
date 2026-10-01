// Paul Guthera 
//CT100/G/30675/26

#include <stdio.h>

// Function prototype
float calculateTax(float gross_salary);

int main()
{
    float gross_salary, tax, net_salary;

    printf("Enter the gross salary: ");
    scanf("%f", &gross_salary);

    // Function call
    tax = calculateTax(gross_salary);

    // Calculate net salary
    net_salary = gross_salary - tax;

    printf("\n");
    printf("LEAH ENTERPRISE C PROGRAM\n");
    printf("=========================\n");
    printf("Gross salary: Ksh %.2f\n", gross_salary);
    printf("Tax         : Ksh %.2f\n", tax);
    printf("Net salary  : Ksh %.2f\n", net_salary);
    printf("=========================\n");

    return 0;
}

// Function definition
float calculateTax(float gross_salary)
{
    float tax;

    if (gross_salary <=30000){
        tax = (0.05 * gross_salary);
    }
    else if (gross_salary >= 30000 && gross_salary <= 59999){
        tax = 0.10 * gross_salary;
    }
    else if(gross_salary>=60000){
        tax = 0.15 * gross_salary;
    }

    return tax;
}