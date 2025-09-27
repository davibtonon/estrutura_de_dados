// Capítulo 11 do livro
#include <stdio.h>
#include <stdlib.h>

void execute_exercise_11_1();
void execute_exercise_11_2();
void execute_exercise_11_3();
void execute_exercise_11_4();
void execute_exercise_11_5();
void execute_exercise_11_6();
void execute_exercise_11_7();

typedef struct {
  char *nome;
  float valor_hora;
  int horas_mes;
} Funcionario;

typedef struct {
  char name[81];
  int day, month, year;
} Pessoa;

void print_funcionario(Funcionario n) {
  /* Função para exibir funcionário
     Para os exercícios:
      - execute_exercise_11_1
 */
  printf("Nome: %s\n", n.nome);
  // printf("Valor hora: %2.f\n", n.valor_hora);
  // printf("Hora mês: %d\n", n.horas_mes);
}

Funcionario *busca(int n, Funcionario **v, char *nome) {
  // Função para realizar busca binária de um nome em um vetor
  // Ela somente compara a primeira letra de cada nome.
  // Sugestão de melhoria seria compara o nome inteiro.
  //
  int start = 0;
  int end = n - 1;

  while (start <= end) {
    int middle = (start + end) / 2;
    if (nome[0] < v[middle]->nome[0]) {
      end = middle - 1;
    } else if (nome[0] > v[middle]->nome[0]) {
      start = middle + 1;
    } else {
      return v[middle];
    }
    // printf("%c\n",v[start] -> nome[0]);
  }

  return NULL;
}

Pessoa *busca_pessoa(int n, Pessoa **v, int dia, int mes, int ano) {}

void execute_exercise_11_1() {
  // Busca binária em um vetor de funcionario
  //
  Funcionario a, b, c, d;

  a.nome = "Davi";
  a.valor_hora = 10.5;
  a.horas_mes = 10;

  b.nome = "Matheus";
  b.valor_hora = 11.5;
  b.horas_mes = 20;

  c.nome = "Laisa";
  c.valor_hora = 15.5;
  c.horas_mes = 40;

  d.nome = "Tiago";
  d.valor_hora = 14.5;
  d.horas_mes = 50;

  Funcionario *funcionarios[] = {&a, &b, &c, &d};

  // print_funcionario(a);
  // print_funcionario(b);
  // print_funcionario(c);
  // print_funcionario(d);
  Funcionario *pos = busca(4, funcionarios, "gavi");
  if (pos != NULL) {
    print_funcionario(*pos);
  } else {
    printf("Não encontrado");
  }
}

void execute_exercise_11_2() {}
int main() { execute_exercise_11_1(); }
