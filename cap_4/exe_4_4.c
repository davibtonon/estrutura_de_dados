#include <stdio.h>
#include <math.h>

double pot (double x, int k){

    if(k == 0){
        return 1;
    }
    else {
        return x*pot(x, k-1);
    }
}

int main (void){
    double valor, resp;
    int p;

    printf("Digite um valor: ");
    scanf("%lf", &valor);

    printf("Digite a potencia: ");
    scanf("%d", &p);

    resp = pot(valor, p);
    printf("Resultado: %.2lf\n", resp);

    printf("Resultado math: %.2lf", pow(valor, p));


    return 0;

}
