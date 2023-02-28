#include <stdio.h>

int main() {
  int x;
  printf("Digite um valor\n");
  scanf("%i", &x);
  printf("O valor escolhido é: %i\n", x);
  printf("O valor escolhido na base octal é: %o\n", x);
  printf("O valor escolhido na base hexadecimal é: %x\n", x);
  return 0;
}