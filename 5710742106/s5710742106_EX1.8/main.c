#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    printf("Enter high: ");
    scanf("%f",&x);
    printf("Enter width: ");
    scanf("%f",&y);
    printf("\nTriangle area is %.2f\n",0.5*x*y);

    return 0;
}
