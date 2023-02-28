#include <stdio.h>
int main() {
  float c, f;
  printf("Digite o valor da temperatura em graus celsius:\n", c);
  scanf("%f", &c);
  f = (9 * c + 160) / 5;
  printf("Valor de %.1f°C em °F é:%.1f\n", c, f);
  return 0;
}