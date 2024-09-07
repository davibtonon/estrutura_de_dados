#include <stdio.h>
/* Função máximo diversor comum */

int mdc(int x, int y){
    int r = x % y;
    if ( r == 0)
        return y;
    else
        return mdc(y, r);
}

int main(){
    int a = 98, b = 56;
    int x;

    x = mdc(a, b);
    printf("MDC %d e %d : %d", a, b, x);

    return 0;
}
