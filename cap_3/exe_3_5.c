# include <stdio.h>

int main(void){
    float nota_1, nota_2, media;

    printf("Digite a nota P1: ");
    scanf("%f", &nota_1);

    printf("Digte a nota P2: ");
    scanf("%f", &nota_2);

    media = (nota_1 + nota_2) / 2;

    if (media >= 5 && nota_1 > 3 && nota_2 > 3){
        printf("Aluno passou direto, parabens\n");
    } else {
        float nota_3;
        printf("Aluno nao passou precisa de prova final!!!\n");
        printf("Digite a nota P3: ");
        scanf("%f", &nota_3);

        nota_1 = nota_2 > nota_1 ? nota_2:nota_1;
        media = (nota_1 + nota_3) / 2;
    }

    if (media >= 5){
        printf("Aprovado...\n");
    }
    else {
        printf("Reprovado...\n");
    }

    printf("Nota final %.2f", media);


    return 0;
}
