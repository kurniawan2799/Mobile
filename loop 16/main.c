#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    for (a=1;a<6;a++)
    {
        for(c=5;c>a;c--)
        {
            printf(" ");
        }
        for (b=a;b>0;b--)
        {
            printf("x");
        }printf("\n");
    }
    return 0;
}
