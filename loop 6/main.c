#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    for (a=1;a<8;a++)///memulai angka awal ke batasan
    {
        printf("perulangan ke %d\n", a);///output
        b=1;
        do
    {
        printf("angka ke %d\n", b);
        b++;
    }
    while(b<=5);///membatasi perintah
    }
    return 0;
}
