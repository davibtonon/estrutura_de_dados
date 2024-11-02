#include <stdio.h>


int pares(int n, int * vet);

int pares(int n, int *vet){
    int count = 0;

    for (int i = 0; i < n; i++){
        if (vet[i]%2 == 0){
            count ++;
        }
    }

    printf("O vetor tem %d numero pares", count);


    return 0;
}



int main (void){
    int n;
    printf("Qual o valor de n: ");
    scanf("%d", & n);

    int vetor[n];

    for (int i = 0; i < n; ++i) {
        int valor;
        printf("v[%d] = ", i);
        scanf("%d", &valor);
        vetor[i] = valor;

    }

    pares(n, vetor);

    return 0;
}
