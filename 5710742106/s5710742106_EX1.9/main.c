#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///a  T
    printf("%-10d\n",1000);

    ///b  F  เพราะprintfเป็น char แต่ข้อมูลเป็น string
    printf("%c\n","This is a string");

    ///c   T
    printf("%*.*lf\n",9,3,1024.987654);

    ///d   T
    printf("%ld\n%+ld\n",1000000,1000000);

    ///e    T
    printf("%10.2E\n",444.93738);

    ///f  F  เพราะprintfเป็น int แต่ข้อมูลเป็น float
    printf("%d\n",10.987);
    return 0;
}
