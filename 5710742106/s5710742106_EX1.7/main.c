#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp;
    printf("Enter: ");
    scanf("%d",&temp);
    if(temp%7==0)
        printf("\nDivision 7 TRUE\n");
    else
        printf("\nDivision 7 FALSE\n");

    return 0;
}
