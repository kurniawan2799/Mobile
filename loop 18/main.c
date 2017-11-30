#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    for (a=5;a>=1;a--)
    {
        for(c=5;c>=a;c--)
        {
            printf(" ");
        }
        for (b=1;b<=a;b++)
        {
            printf("x");
        }printf("\n");
    }
    return 0;
}
