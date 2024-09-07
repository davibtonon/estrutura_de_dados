#include <stdio.h>
#include <math.h>


int quadratic_roots(double a, double b, double c, double *px1, double *px2){
    double delta;

    delta = b*b - ( 4 * a * c);
    printf("Delta: %.2lf\n", delta);
    if (delta <= 0 ) {
        printf("Não existem raizes reais");
    }
    else {
        *px1 = (-b + sqrt(delta)) / (2 * a);
        *px2 = (-b - sqrt(delta)) / (2 * a);
    }

    return 0;
}

int main(void){
    double a, b, c;
    double x1, x2;

    printf("Digite o valor de a: ");
    scanf("%lf", &a);

    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o valor de c: ");
    scanf("%lf", &c);


    quadratic_roots(a, b, c, &x1, &x2);

    printf("Os valores de x1: %.2lf\n", x1);
    printf("Os valores de x2: %.2lf\n", x2);

    return 0;
}
