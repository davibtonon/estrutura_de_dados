# include <stdio.h>

int main (void)
{
    float c;
    float f;
    printf("Entre com temperatura em Celsius: ");
    scanf("%f", & c);
    f = 1.8 * c + 32;
    printf("Temperatura em Fahrenheit: %f\n ", f);
    return 0;

}
