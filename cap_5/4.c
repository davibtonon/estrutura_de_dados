#include <stdio.h>
#include <math.h>

float square_root(int n){

    float x_0 = n;
    float x_i;
    float tol = 0.001;
    float erro = 1;

    do {
        x_i = (x_0 + ( n / x_0)) / 2;
        erro = fabs((x_i * x_i) - n);
        x_0 = x_i;

    } while (erro > tol);

    return x_0;
};

int main (void) {
    int x;
    printf("Digite um valor: ");
    scanf("%d", &x);
    printf("A raiz quadrada de %d = %f", x, square_root(x));

    return 0;
}
