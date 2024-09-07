# include <stdio.h>

int main (void){
    int a, b, c, maior, meio, menor;


    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    maior = a > b ? a:b;
    maior = c > maior ? c:maior;

    menor = a < b ? a:b;
    menor = c < menor ? c:menor;


    if ( maior == a){
        if ( menor == b) {
            meio = c;
        }else {
            meio = b;
        }
    } else if (maior == b){
        if (menor == a) {
            meio = c;
            printf("mc");
        }
        else {
            meio = a;
            printf("ma");
        }
    } else if (menor == a) {
        meio = b;
    }else {
        meio = a;
    }

    printf("%d ", menor);
    printf("%d ", meio);
    printf("%d ", maior);

}
