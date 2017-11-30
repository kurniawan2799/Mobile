#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("masukan angka = ");
    scanf("%d", &b);
    for (a=1;a<11;a++)///memulai angka awal ke batasan
    {
        printf("%d * %d = %d\n", a,b,a*b);///output
    }
    return 0;
}
