# include <stdio.h>

int main(void){
    int f; /* pés */
    float p; /* polegagas */
    float h; /* metros */

    printf("Digite a altura em metros: ");
    scanf("%f", &h);

    h = 100*h;
    f = (int) (h/30.48);
    p = (h-f*30.48) / 2.54;
    printf("Altura: %d ft %.1f pol \n", f, p);

    return 0;

}
