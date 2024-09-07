# include <stdio.h>

int main (void){
    int a, b, c, maior;


    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    maior = a > b ? a:b;
    maior = c > maior ? c:maior;

    printf("O maior numero é %d", maior);
}
