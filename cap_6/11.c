#include <stdio.h>


int read_matriz(int n, double matriz[n][n]){
    /* Function to read an integer vector*/

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }
}


int triangular_inferior(int n, double A[n][n]){
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; j++) {
            if (A[i][j] != 0){
                return 0;
            }
        }
    }

    return 1;
}


int main (void){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    double matriz[n][n];

    read_matriz(n, matriz);
    if (triangular_inferior(n, matriz)){
        printf ("Matriz é trinagular inferior");
    } else {
        printf("Matriz não é tringular inferior");
    }
    return 0;
}
