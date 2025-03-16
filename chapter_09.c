# include <stdio.h>
# include <stdlib.h>
# include <math.h>


typedef struct point Point;
typedef struct vetor Vetor;
typedef struct circle Circle;
typedef struct rectangle Rectangle;
typedef struct student Student;

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

struct point {float x, y; };
struct vetor { float x, y, z; };
struct rectangle { float base, height; };
struct circle {
    Point p;
    float radius;
};

struct student {
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;

};

int dentroRet (Point* v1, Point* v2, Point* p){
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

Rectangle* ret_cir(Circle* c, float h){
    float b;
    if (c -> radius * 2 < h){
        return NULL;
    }
    b = 2 * sqrt( c -> radius * c -> radius - (h/2) * (h/2));

    Rectangle* rec = (Rectangle*)malloc(sizeof(Rectangle));

    rec -> height = h;
    rec -> base = b;

    return rec;
}

Circle* cir_ret(Rectangle* r){
    float radius;
    if (r -> base < r -> height){
        radius = r -> base / 2 ;
    }else{
        radius = r -> height / 2;
    }

    Circle* c = (Circle*)malloc(sizeof(Circle));
    if (c == NULL){
        return NULL;
    }
    c -> radius = radius;

    return c;
}


float pythagorean_theorem(Point* a, Point* b){
    float c1 = pow(a -> x - b -> x, 2);
    float c2 = pow(a -> y - b -> y, 2);

    return sqrt(c1 + c2);
}


int intersection( Circle* a, Circle* b){

    float d,c1, c2;
    c1 = pow(a -> p.x - b -> p.x, 2);
    c2 = pow(a -> p.y - b -> p.y, 2);
    d = sqrt(c1 + c2);

    if (fabs( a -> radius - b -> radius) <= d &&  d <= (a -> radius + b -> radius)){
        return 1;
    }

    return 0;
}


float length(int n, Point* V){
    float d = 0;

    for (int i = 0; i < n - 1; i++) {
        d += pythagorean_theorem(&V[i], &V[i+1]);
    }

    return d;
}

void print_approved(int n, Student** classes){
    for (int i = 0; i < n; i++) {
        float mean = (classes[i] ->p1 + classes[i] -> p2 + classes[i] ->p3) / 3;

        if(mean > 5){
            printf("Name: %s\n", classes[i] -> nome);
        }

    }

}

void execute_exercise_9_1(){
    Point v1, v2, p;
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

void execute_exercise_9_3(){
    float h = 6;
    Circle c;
    c.radius = 5;

    Rectangle* ret = ret_cir(&c, h);
    if (ret != NULL){
        printf("Base: %.2f, Height: %.2f\n", ret -> base, ret ->height);
    } else {
        printf("Not possible make rectangle\n");
    }


    Circle* cir = cir_ret(ret);
    if( cir != NULL){
        printf("Radius: %f\n", cir -> radius);
    } else {
        printf("Not possible make a circle");
    }
    free(ret);
    free(cir);
}


void execute_exercise_9_4(){
    Circle a, b;
    a.p.x = 0;
    a.p.y = 0;
    a.radius = 5;

    b.p.x = 3;
    b.p.y = 0;
    b.radius = 4;

    int r = intersection(&a, &b);
    if(r == 1){
        printf("The circles intersect.");
    } else {
        printf("The circles not intersect");
    }
}

void execute_exercise_9_4_b(){

    Point a = {1, 2};
    Point b = {4, 6};
    Point c = {7, 8};

    Point v[] = {a, b, c};

    float len = length(3, v);
    printf("Lenght: %.2f\n", len);

}

void execute_exercise_9_5(){
    Student a = {"Davi", "1425", 'A', 5.1, 6.8, 10.0};
    Student* classes[] = {&a};
    print_approved(1, classes);

}

int main(void){
    //struct ponto p;
   // printf("Digite as coordenadas do ponto (x, y): ");
    //scanf("%f %f", &p.x, &p.y);
    //printf("O ponto fornecido foi: (%2.f, %.2f)\n", p.x, p.y);
    execute_exercise_9_5();
    return 0;

}

