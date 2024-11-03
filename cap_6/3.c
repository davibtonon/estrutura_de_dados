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


void minimum(int n, float *v){
    float min = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] < min){
            min = v[i];
        }
    }
    printf("Minimum value is : %f", min);
}



int main (void){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    float vec[n];
    read_vector(n, vec);
    minimum(n, vec);
    return 0;
}
