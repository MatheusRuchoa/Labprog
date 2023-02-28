#include <stdio.h>

int main() {
  int n1, n2;
  printf("Digite o primeiro valor:\n", n1);
  scanf("%i", &n1);
  printf("Digite o segundo valor:\n", n2);
  scanf("%i", &n2);
  printf("Soma:%i\nproduto:%i\nDiferença:%i\nQuociente:%i\nResto:%i\n", n1 + n2,
         n1 * n2, n1 - n2, ((float)n1) / n2, n1 % n2);
  return 0;
}