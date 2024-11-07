#include <stdio.h>
#include <math.h>


void read_vector(int n, float *vector){
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

float geometrica(int n, float *v){
    float mean = 1;
    for (int i = 0; i < n; i++) {
        mean *= v[i];
    }

   return pow(mean, 1.0/n);
}

int main (void){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    float vec[n];
    read_vector(n, vec);
    printf("Mean: %f", geometrica(n, vec));



    return 0;
}
