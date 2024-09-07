# include <stdio.h>
# include <math.h>

int main(void){
    float volume, raio;
    float pi = 3.14;
    printf("Digite o raio da esfera: ");
    scanf("%f", & raio);
    raio = pow(raio, 3);
    volume = pi*raio* 4 / 3;
    printf("Volume da esfera: %f", volume);

    return 0;
}
