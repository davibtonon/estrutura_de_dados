#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int choise_number(void){
    int n;
    printf("\nChoise a number 0 - 1024: ");
    scanf("%d", &n);

    return n;
}

int predict_number(){

    srand(time(NULL));
    int random_number = rand() % 1024;
    int numero_tentativas = 1;
    int choise_user;
//    printf("%d", random_number);
    do {
        choise_user = choise_number();
        if (choise_user == random_number){
            printf("0");
            printf("Parabens vc acertou!!!");
            printf("Numero de tentativas %d", numero_tentativas);
            return 0;
        } else if (random_number < choise_user) {
            printf("-1 ");
        }else {
            printf("1");
        }

        numero_tentativas ++;
    } while (1);

    return 0;
}

int main (void){

    predict_number();
}
