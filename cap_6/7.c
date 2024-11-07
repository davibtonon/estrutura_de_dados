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

float ponderada (int num_elements, float *data_values, float *weights){
    float weighted_sum = 0;
    float total_weight = 0;

    for (int i = 0; i < num_elements; i++) {
         weighted_sum += data_values[i] * weights[i];
         total_weight += weights[i];

    }

    return weighted_sum / total_weight;
}

int main (void){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    float vec[n];
    float vec_w[n];
    read_vector_float(n, vec);
    printf("Enter the values of w: ");
    read_vector_float(n, vec_w);
    printf("Mean: %f ", ponderada(n, vec, vec_w));

    return 0;
}
