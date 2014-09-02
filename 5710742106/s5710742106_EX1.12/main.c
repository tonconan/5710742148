#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    printf("Enter salary :");
    scanf("%f",&x);
    y = x*0.1;
    printf("Salary : %.2f,Tax : %.2\n",x,y);
    system("pause");
    return 0;
}
