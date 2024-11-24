#include <stdio.h>
#include <stdlib.h>


int** create_matrix(int n){
    int **m = (int **) malloc(n *sizeof(int *));

    for (int i = 0; i < n; i++) {
        m[i] = (int *) malloc((1 + i) * sizeof(int));

    }

    return m;
}


void write_value(int i, int j, int x, int **m){
    if (i >=j) {
        m[i][j] = x;
    }

    else {
        printf("Invalid position.\n");
    }
}


int read_value (int i, int j, int **m){
    if (i >=j){
        return m[i][j];
    }
    else {
        return 0;
    }
}

void print_m(int n, int **m){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d, ", read_value(i, j, m));
        }
        printf("\n");
    }
}

void m_libera(int n, int **m){
    for (int i = 0; i < n; ++i) {
        free(m[i]);
    }
    free(m);
}


int main (void){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int ** mat = create_matrix(n);

    write_value(0, 0 , 1, mat);

    write_value(1, 0 , 2, mat);
    write_value(1, 1 , 3, mat);

    write_value(2, 0 , 4, mat);
    write_value(2, 1 , 5, mat);
    write_value(2, 2 , 6, mat);

    printf("%d \n", read_value(1, 0, mat));
    print_m(n, mat);

    m_libera(n, mat);

    return 0;
}
