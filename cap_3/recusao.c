#include <stdio.h>

void func (int n){
    printf("%d ", n);
    if (n > 0) {
        func(n-1);
        printf("*");
    }


}

int fat( int n){
    if (n == 0){
        return 1;
    }

    else {
        return n*fat(n-1);
    }
}

int main(void){
    printf("%d", fat(5));
}
