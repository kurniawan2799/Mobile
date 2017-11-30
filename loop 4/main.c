#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    for (a=1;a<8;a++)///memulai angka awal ke batasan
    {
        printf("perulangan ke %d\n", a);///output
        for (b=1;b<6;b++)
        {
            printf("angka ke %d\n", b);
        }
    }
    return 0;
}
