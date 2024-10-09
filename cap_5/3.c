#include <stdio.h>

int fibonacci(int n){
    //Função imprimi os primeiros n termos da séria de Fibonacci.
    int a = 0;
    int b = 1;

    if (n >= 1){
        printf("%d ", a);
    }

    for (int i=2; i<=n; i++){
        printf("%d ", b);
        int c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

int main(void){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Os primeiros %d termos da serie sao: ", n);
    fibonacci(n);

    return 0;
}
