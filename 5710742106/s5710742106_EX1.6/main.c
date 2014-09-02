#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,Avrage;
    printf("1st number:");
    scanf("%f",&a);
    printf("2nd number:");
    scanf("%f",&b);
    printf("3rd number:");
    scanf("%f",&c);

    Avrage=(a+b+c)/3;
    printf("\nThe average is %.2f\n",Avrage);
    return 0;
}
