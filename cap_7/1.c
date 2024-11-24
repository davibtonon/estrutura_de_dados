#include <stdio.h>
#include <stdlib.h>

int read_vector(int n, int *vector){
    /* Function to read an integer vector*/

    for (int i = 0; i < n; ++i) {
        int value;
        printf("v[%d] = ", i);
        scanf("%d", &value);
        vector[i] = value;
    }

    return 0;
}


void p_vector(int n, int *vector){
    /* Function to display a vector on the screen*/

    for (int i = 0; i < n; ++i) {
        printf("%d, ", vector[i]);
    }

    printf("\n");
}


int* reverso (int n, int* v){
    int *rev = (int*) malloc( n * sizeof(int));

    for (int i = 0; i < n; i++) {
        rev[i] = v[n-i-1];
    }

    return rev;
}


int main (void){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int vec[n];

    read_vector(n, vec);
    p_vector(n, vec);

    printf("\n");

    int *rev = reverso(n, vec);
    p_vector(n, rev);

    free(rev);

    return 0;
}
