#include <stdio.h>

int main() {
  int dias;
  float salario, gratificacao, imposto, total;
  printf("Digite a quantidade de dias que foram trabalhados: ");
  scanf("%i", &dias);
  salario = 50.25 * dias;
  imposto = 0.1;
  if (dias <= 10) {
    gratificacao = 0;
  } else if (dias <= 20) {
    gratificacao = 0.2;
  } else {
    gratificacao = 0.3;
  }
  total = salario + (salario * gratificacao) - (salario * imposto);
  printf("Total: %f", total);
  return 0;
}