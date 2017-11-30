#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    for (a=1;a<7;a++)///memulai angka awal ke batasan
    {
        for (b=1;b<7;b++)
        {
            printf("%d%d ", a,b);
        }printf("\n");
    }
    return 0;
}
