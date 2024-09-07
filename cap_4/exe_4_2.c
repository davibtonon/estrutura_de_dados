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
    int a , b, c;
    int x;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    x = mdc(mdc(a, b), c);
    printf("MDC %d, %d e %d : %d", a, b, c, x);

    return 0;
}
