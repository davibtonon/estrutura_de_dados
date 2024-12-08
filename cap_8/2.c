#include <stdio.h>

#define MAX 50


int is_vowels(char n){

    char vowels[] = "AEIOUaeiou";
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (vowels[i] == n) {
            return 1;
        }
    }
    return 0;
}


int count_vowels(char *str){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if(is_vowels(str[i])){
            count ++;
        }
    }
    return count;
}

int main(){
 char name[MAX];


 printf("Enter a name: ");
 scanf(" %49[^\n]", name);

 printf("The number of vowels is  %d\n", count_vowels(name));

 return 0;
}


