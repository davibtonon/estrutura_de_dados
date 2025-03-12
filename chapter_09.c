# include <stdio.h>


typedef struct ponto Ponto;
typedef struct vetor Vetor;


void execute_exercise_9_1();
void execute_exercise_9_2();
void execute_exercise_9_3();
void execute_exercise_9_4();
void execute_exercise_9_5();
void execute_exercise_9_6();
void execute_exercise_9_7();
void execute_exercise_9_8();
void execute_exercise_9_9();
void execute_exercise_9_10();

struct ponto {float x, y; };
struct vetor { float x, y, z; };


int dentroRet (Ponto* v1, Ponto* v2, Ponto* p){
    if ( (v1 -> x > p -> x) & (v2 -> x < p -> x)){
        return 0;
    } else if ((v1 -> y > p -> y) & (v2 -> y < p -> y)){
        return 0;
    }

    return 1;
}


float escalar (Vetor *v1, Vetor* v2){
    float n;
    n = v1 -> x * v2 -> x + v1 -> y * v2 -> y + v1 -> z * v2 -> z;

    printf("Produtor escalar: %f", n);

    return n;
}


void execute_exercise_9_1(){
    Ponto v1, v2, p;
    v1.x = 10;
    v1.y = 20;

    v2.x = 20;
    v2.y = 40;

    p.x = 15;
    p.y = 35;

    int res = dentroRet(&v1, &v2, &p);
    printf("%d", res);
}

void execute_exercise_9_2(){
    Vetor a, b;
    a.x = 1;
    a.y = 2;
    a.z = 3;

    b.x = 4;
    b.y = -1;
    b.z = 2;

    escalar(&a, &b);

}
int main(void){
    //struct ponto p;
   // printf("Digite as coordenadas do ponto (x, y): ");
    //scanf("%f %f", &p.x, &p.y);
    //printf("O ponto fornecido foi: (%2.f, %.2f)\n", p.x, p.y);

    execute_exercise_9_2();
    return 0;

}

