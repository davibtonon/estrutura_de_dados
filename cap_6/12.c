#include <stdio.h>


int read_vector(int n, double *vector){
    /* Function to read an integer vector*/

    for (int i = 0; i < n; ++i) {
        double value;
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

int identidade (int n, double matriz[n][n]){

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i && matriz[i][j] != 1) {
                return 0;
            }
            if (j != i && matriz[i][j] != 0)
                return 0;
        }
    }

    return 1;
}

int main (void){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    double vec[n][n];

    read_matriz(n, vec);

    if (identidade(n, vec)){
        printf("A matriz é identidade");
    } else {
        printf("A matriz não é identidade");
    }
    return 0;
}
