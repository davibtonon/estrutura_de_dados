#include <stdio.h>


int read_vector(int n, float *vector){
    /* Function to read an integer vector*/

    for (int i = 0; i < n; ++i) {
        float value;
        printf("v[%d] = ", i);
        scanf("%f", &value);
        vector[i] = value;
    }
}


void p_vector(int n, int *vector){
    /* Function to display a vector on the screen*/

    for (int i = 0; i < n; ++i) {
        printf("%d, ", vector[i]);
    }
}


void calculete_harmonic_mean(int n, float *vec){
    float mean = 0;
    for (int i = 0; i < n; i++) {
        mean += 1 / vec[i];
    }

    mean = n / mean;
    printf("Mean is: %f", mean);
}


int main (void){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    float vec[n];

    read_vector(n, vec);
    calculete_harmonic_mean(n, vec);


    return 0;
}
