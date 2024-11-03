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


void reverse (int n, int *vec){
    int temp[n];
    for (int i = 0; i < n; ++i) {
        temp[n-i-1] = vec[i];
    }

    for( int i = 0; i < n; ++i){
        vec[i] = temp [i];
    }
}


int main (void){
    int n;
    printf("Enter the value of  n: ");
    scanf("%d", & n);

    int vector[n];
    read_vector(n, vector);
    printf("Vector: ");
    p_vector(n, vector);
    reverse( n, vector);
    printf("New vector: ");
    p_vector(n, vector);

    return 0;
}
