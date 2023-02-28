#include <stdio.h>

int main() {
  int num;
  printf("Digite um número inteiro: ");
  scanf("%i", &num);

  printf("O número %i é %s.\n", num, (num % 2 == 0) ? "par" : "ímpar");
  return 0;
}