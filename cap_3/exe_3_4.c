# include <stdio.h>
# include <math.h>

int main(void){
    float raio, angulo, x, y;

    printf("Qual o raio: ");
    scanf("%f", &raio);

    printf("Qual o angulo: ");
    scanf("%f", &angulo);

    x = raio * cos(angulo);
    y = raio * sin(angulo);

    printf("Cordendas cartesianas: ");
    printf("( %.2f, %.2f)", x, y);

}
