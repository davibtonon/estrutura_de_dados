#include <stdio.h>

#define MAX 50


int len_char(char *s, char c){
    int cont = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c){
            cont ++;
        }

    }

    return cont;
}


int main(){
 char name[MAX];
 char c;

 printf("Digite um nome: ");
 scanf(" %49[^\n]", name);

 printf("Digite uma letra: ");
 getchar();
 scanf("%c", &c);

 printf("O numero de %c é %d\n", c, len_char(name, c));

 return 0;
}


