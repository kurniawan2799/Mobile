#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    a=1;///masukan
    while(a<=7)
    {
        printf("perulangan ke %d\n", a);
        a++;
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
