#include <stdio.h>

double fibonacci(int i){

    if (i <= 1)
        return i;
    else{
       return fibonacci(i - 2) + fibonacci(i - 1);
        }
}

int main(void){
    int valor, f;

    printf("Qual valor da serie: ");
    scanf("%d", &valor);

    f = fibonacci(valor);

    printf("i-esimo: %d", f);

    return 0;

}
