#include <math.h>
#include <stdio.h>

int main() {
  int valor;
  printf("Digite o valor: ");
  scanf("%d", &valor);
  valor = sqrt(valor * valor);
  printf("Valor absoluto: %d", valor);
}