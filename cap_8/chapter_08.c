#include <stdio.h>
// Essa são as minhas soluções para os exercícios do capitulo 8 do livro
// Introdução a Estruturas de Dados - Com Técnicas de Programação em C.

void execute_exercise_8_3();
void execute_exercise_8_4();
void execute_exercise_8_5();
void execute_exercise_8_6();
void execute_exercise_8_7();
void execute_exercise_8_8();
void execute_exercise_8_9();


void process_string( void (*func)(char *)){
// Essa é uma função auxiliar, que cria um char de 40 é passar como argumento
// de outra função.

    char str[40];
    printf("Type a name: \n");
    scanf("%39s", str);
    func(str);
    printf("%s\n", str);
}


void lowercase(char *str){
 // Converte todos os caracteres de uma string para minusculos.

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
}


void shift_string(char *str){
    //Substitui os caracteres de uma string pelo sucessor
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'z'){
            str[i] ++;
        }
    }
}


void reverse_string(char *str){
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = 65 + 90 - str[i];
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'z' + 'a' - str[i];
        }
    }
}

void rotate_string(char *str) {
    // Move cada caractere de uma strin para a direita
    char temp = str[0];
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i + 1] != '\0') {
            char b = str[i+1];
            str[i+1] = temp;
            temp = b;
        }
    }
    str[0] = temp;
}


// Aqui estão as funções que fazem as resolução do exercícios ---------------

void execute_exercise_8_3()
{
    char str[40];
    printf("Type a name\n");
    scanf("%39s", str);
    lowercase(str);
    printf("%s", str);
}


void execute_exercise_8_4(){
    // Neste exercícios recebe como paramentro uma string digita pelo usuario
    // em seguida substitui cada caractere pelo sucessor por exemplo:
    // AbCd -> BcDe

    char str[40];
    printf("Type a name: \n");
    scanf("%39s", str);
    shift_string(str);
    printf("%s", str);
}

void execute_exercise_8_5(){
    char str[40];
    printf("Type a name: \n");
    scanf("%39s", str);
    reverse_string(str);
    printf("%s", str);

}


void execute_exercise_8_6(){
    process_string(rotate_string);
}


int main(){
    //execute_exercise_8_3();
    execute_exercise_8_6();
    return 0;
}
