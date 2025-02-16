#include <stdio.h>


void imprime_inv (char *s)
{
    if (s[0] != '\0')
    {   imprime_inv(&s[1]);
        printf("%c", s[0]);

    }
}

void t(){
//    char c = 97;

    char c = 'a';
    printf("%d %c \n", c, c);
}
int main(){
 t();

 return 0;
}


