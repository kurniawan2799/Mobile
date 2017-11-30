#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    a=1;
    do
    {
        printf("perulangan ke %d\n", a);
        a++;
        for (b=1;b<6;b++)///memulai angka awal ke batasan
    {
        printf("angka ke %d\n", b);///output
    }
    }
    while(a<=7);///membatasi perintah
    return 0;
}
