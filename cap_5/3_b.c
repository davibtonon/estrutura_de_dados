#include <stdio.h>

int fibonacci(int n){
    //Função que determinar se um valor x, pertence a séria de fibonacci.
    int a = 0;
    int b = 1;
    int c = 0;
    if (n <=1 ){
        printf("Pertence");
        return 0;
    }

    while( c < n ){
        c = a + b;
        if ( c == n){
            printf("Pertence");
            return 0;
        }
        a = b;
        b = c;

    }
    printf("Nao pertence");

    return 0;
}

int main(void){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("O numero %d pertence a serie de Fibonnaci ? \n", n);
    fibonacci(n);

    return 0;
}
