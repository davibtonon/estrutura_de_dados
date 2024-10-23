#include <stdlib.h>
#include <stdio.h>
#include <time.h>



int predict_number(){

    int numero_tentativas = 1;
    int max = 1024, min = 0;

    printf("\nChoise a number 0 - 1024: ");
    do {

        srand(time(NULL));
        int random_number = rand() % ( max - min + 1);
        random_number += min;
        int user_op;
        printf("\nI choice: %d", random_number);
        printf("\nI'm right ? ");
        scanf("%d", &user_op);


        if (user_op == 0){
            printf("Parabens vc acertou!!!\n");
            printf("Numero de tentativas %d", numero_tentativas);
            return 0;
        } else if (user_op == -1) {
            printf("Digar um numero menor: -1");
            max = random_number - 1;
        }else {
            printf("Digar um numero maior: +1");
            min = random_number + 1;
        }

        numero_tentativas ++;
    } while (1);

    return 0;
}

int main (void){

    predict_number();
}
