#include <stdio.h>

int main() {
  int x;
  printf("Digite um valor:\n", x);
  scanf("%i", &x);
  printf("O valor %i elevado ao quadrado é:%i", x, x * x);
  return 0;
}