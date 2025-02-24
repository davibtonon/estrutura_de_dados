#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Essa são as minhas soluções para os exercícios do capitulo 8 do livro
// Introdução a Estruturas de Dados - Com Técnicas de Programação em C.

void execute_exercise_8_3();
void execute_exercise_8_4();
void execute_exercise_8_5();
void execute_exercise_8_6();
void execute_exercise_8_7();
void execute_exercise_8_8();
void execute_exercise_8_9();

char *new_string(){
    char *str = (char *)malloc(40 * sizeof(char));
    printf("Type a name: ");
    scanf(" %39[^\n]", str);

    return str;
}


void process_string( void (*func)(char *)){
// Essa é uma função auxiliar, que cria um char de 40 é passar como argumento
// de outra função.

    char *str = new_string();
    func(str);
    printf("%s\n", str);

    free(str);
}


int choce_n(){
    int n;
    printf("Choise a number: ");
    scanf("%d", &n);

    return n;
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


char *remove_suf(char *str, int n){

    int new_size = strlen(str) - n;
    char *new_str = (char *)malloc(new_size * sizeof(char));
    for (int i = 0; i < new_size; i++) {
        new_str[i] = str[i];
    }

    new_str[new_size] = '\0';

    return new_str;

}


char *converter(char *s){
    int n = strlen(s) + 1;
    int count = 0;
    char *new_string = (char*)malloc(n * sizeof(char));

    for (int i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            new_string[count] = s[i];
            count ++;
        }
    }

    new_string[count] = '\0';

    return new_string;
}


char *concatenate(char *s1, char *s2, char sep){
    int size_s1 = strlen(s1);
    int size_s2 = strlen(s2);
    int size_new = size_s1 + size_s2 + 2;
    int count = 0;
    char *str_conc = (char*)malloc(size_new * sizeof(char));

    for (int i = 0; s1[i] != '\0'; i++) {
       str_conc[i] = s1[i];
       count ++;
    }

    str_conc[count] = sep;
    count ++;

    for (int i = 0; s2[i] != '\0'; i++) {
        str_conc[count] = s2[i];
        count++;

    }

    str_conc[count] = '\0';

    return str_conc;
}



// Aqui estão as funções que fazem as resolução do exercícios ---------------

void execute_exercise_8_3()
{
    char str[40];
    printf("Type a name\n");
    scanf("%39s[^\n]", str);
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


void execute_exercise_8_7(){

    char str[40];
    int n;
    printf("Type a name: \n");
    scanf("%39[^\n]", str);

    printf("Choise a number: ");
    scanf("%d", &n);

    char *new_str = remove_suf(str, n);
    printf("%s", new_str);

    free(new_str);

}

void execute_exercise_8_8(){
    char *s = new_string();
    char *new_s = converter(s);
    printf("%s\n", s);
    printf("%s", new_s);

    free(new_s);
    free(s);
}

void execute_exercise_8_9(){
    char *s1 = new_string();
    char *s2 = new_string();
    char sep;
    printf("Sep: ");
    scanf(" %c", &sep);

    char *s3 = concatenate(s1, s2, sep);
    printf("Resultado: %s\n", s3);
    free(s3);
}


int main(){
    //execute_exercise_8_3();
    execute_exercise_8_9();
    return 0;
}
