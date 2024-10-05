# include <stdio.h>
# include <math.h>
int primo(int n){
    if ( n == 2 ){
        return 1;
    }
    else if ((n < 2) || (n%2) == 0) {
        return 0;
    }
    else {
        int lim = (int) sqrt(n);
        for (int i=3; i<= lim; i+=2) {
            if (n % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}

int print_primo(int x){
    for (int i=1; i<=x; i+=2){
        if (primo(i)){
            printf("%d e primo.\n", i);
        }
    }
    return 0;

}


int main(void){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    print_primo(x);

    return 0;
}
