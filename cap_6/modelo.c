#include <stdio.h>


int read_vector(int n, int *vector){
    /* Function to read an integer vector*/

    for (int i = 0; i < n; ++i) {
        int value;
        printf("v[%d] = ", i);
        scanf("%d", &value);
        vector[i] = value;
    }
}


void p_vector(int n, int *vector){
    /* Function to display a vector on the screen*/

    for (int i = 0; i < n; ++i) {
        printf("%d, ", vector[i]);
    }
}





int main (void){




    return 0;
}
