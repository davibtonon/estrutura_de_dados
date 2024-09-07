# include <stdio.h>

int main(void){
    int one_note, two_note, five_note, ten_note, twenty_note,fifty_note, hundre_note;
    int with_draw_amount;
    printf("Qual valor do saque: ");
    scanf("%d", &with_draw_amount);
    hundre_note = with_draw_amount / 100;
    with_draw_amount = with_draw_amount % 100;

    fifty_note = with_draw_amount / 50;
    with_draw_amount  = with_draw_amount % 50;

    twenty_note = with_draw_amount / 20;
    with_draw_amount = with_draw_amount % 20;

    ten_note = with_draw_amount / 10;
    with_draw_amount = with_draw_amount % 10;

    five_note = with_draw_amount / 5;
    with_draw_amount = with_draw_amount % 5;

    two_note = with_draw_amount / 2;
    with_draw_amount = with_draw_amount % 2;

    one_note = with_draw_amount;

    printf("Notas de R$ 100: %d\n", hundre_note);
    printf("Notas de R$  50: %d\n", fifty_note);
    printf("Notas de R$  20: %d\n", twenty_note);
    printf("Notas de R$  10: %d\n", ten_note);
    printf("Notas de R$   5: %d\n", five_note);
    printf("Notas de R$   2: %d\n", two_note);
    printf("Notas de R$   1: %d\n", one_note);

    return 0;


}
