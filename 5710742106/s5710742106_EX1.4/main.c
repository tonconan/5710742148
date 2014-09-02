#include <stdio.h>
#include <stdlib.h>

int main()
{
    float principal,rate,days;
    while(1)
    {
        printf("Enter loan principal (-1 to end): ");
        scanf("%f",&principal);

        printf("Enter interest rate: ");
        scanf("%f",&rate);

        printf("Enter term of the loan in days: ");
        scanf("%f",&days);

        printf("The interest charge is $%.2f\n\n",principal*rate*days/365);
    }
    return 0;
}
