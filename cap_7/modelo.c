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

int read_vector_float(int n, float *vector){
    /* Function to read an float vector*/
    for (int i = 0; i < n; ++i) {
        printf("v[%d] = ", i);
        scanf("%f", &vector[i]);
    }
}


void p_vector(int n, int *vector){
    /* Function to display a vector on the screen*/

    for (int i = 0; i < n; ++i) {
        printf("%d, ", vector[i]);
    }
}

int read_matriz(int n, double matriz[n][n]){
    /* Function to read an integer vector*/

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }
}



int main (void){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    float vec[n];

    read_vector(n, vec);

    return 0;
}
