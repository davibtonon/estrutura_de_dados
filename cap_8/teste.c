#include <stdio.h>


void imprime_inv (char *s)
{
    if (s[0] != '\0')
    {   imprime_inv(&s[1]);
        printf("%c", s[0]);

    }
}

int main(){
 imprime_inv("davi");

 return 0;
}


