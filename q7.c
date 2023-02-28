#include <stdio.h>

int main() {
  int h, min, s, segundostotal;
  puts("Digite o valor da hora:");
  scanf("%i", &h);
  puts("Digite o valor dos minutos:");
  scanf("%i", &min);
  puts("Digite o valor dos segundos:");
  scanf("%i", &s);
  min = min + h * 60;
  segundostotal = s + min * 60;
  printf("O valor total de segundos é: %is\n", segundostotal);
  return 0;
}