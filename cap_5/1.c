#include <stdio.h>

int mdc(int x, int y){
    int r;
    r = x % y;

    printf("MDC %d e %d: ", x, y);


    while (r != 0) {
        x = y;
        y = r;
        r = x % y;
   }

   printf("%d", y);

   return 0;
}

int main(void){
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    mdc(a, b);

    return 0;
}
