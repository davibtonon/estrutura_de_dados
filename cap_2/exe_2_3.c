# include <stdio.h>

int main(void){
    int hours,minutes, seconds, total_seconds;

    printf("Digite o numero de segundos transcorridos: ");
    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds %60;

    printf("Tempo: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;

}
