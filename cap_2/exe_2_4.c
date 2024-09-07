# include <stdio.h>

int main (void){
    float radian_to_angle = 57.29578;
    int degrees, minute_angle, second_angle;
    float degrees_angle, radian_angle, minute, second;
    printf("Qual valor do angulo em radianos: ");
    scanf("%f", &radian_angle);
    degrees_angle = radian_angle * radian_to_angle;
    degrees = (int) degrees_angle;

    minute = (float) (degrees_angle - degrees) ;
    minute = minute * 60;
    minute_angle = (int) minute;

    second = (float) (minute - minute_angle);
    second_angle = (int) (second * 60);

    printf("Valor do angulo: %d %d' %d\" ", degrees, minute_angle, second_angle);

    return 0;


}
