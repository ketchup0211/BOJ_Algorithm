#include <stdio.h>

int main(void)
{
    short year;

    scanf("%hd", &year);

    if (year % 4 == 0)
    {
        if ((year % 100 != 0) || (year % 400 == 0))
            printf("1");
        else
            printf("0");
    }
    
    else printf("0");

    return 0;
}