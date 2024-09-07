# include <stdio.h>

int main(void){
    float preco_galao, taxa_do_real, valor_litro;
    float galao = 3.7854;
    printf("Qual o preco do galao (US$): ");
    scanf("%f", &preco_galao);
    printf("Taxa de conversao (US$ x R$): ");
    scanf("%f", &taxa_do_real);
    valor_litro = (preco_galao / galao) * taxa_do_real;
    printf("Preco do litro (R$): %.2f", valor_litro);

    return 0;
}
