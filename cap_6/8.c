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

int testa_pa(int num_elements, int *v){
    int r = v[1] - v[0];
    for (int i = 1; i < num_elements; i++) {
        if (v[i] != ( v[0] + i*r )){
            return 0;
        }
    }
    return r;
}

int main (void){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int vec[n];

    read_vector(n, vec);
    int r = testa_pa(n, vec);
    if (r == 0){
        printf("The sequence is not an arithmetic progression (PA).\n ");
    } else {
        printf("The commom difference of the PA is: %d\n", r);
    }


    return 0;
}
