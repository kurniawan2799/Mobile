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
    b=1;///masukan
    while(b<=5)
    {
        printf("angka ke %d\n", b);
        b++;
    }
    }
    while(a<=7);///membatasi perintah
    return 0;
}
