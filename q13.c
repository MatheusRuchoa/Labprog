#include <stdio.h>
int main() {
  int a, b, c, d;
  printf("Digite um número:\n", a);
  scanf("%i", &a);
  printf("Digite outro número:\n", b);
  scanf("%i", &b);
  c = a;
  d = b;
  a = d;
  b = c;
  printf("**Antigos valores**\na:%i\nb:%i\n**Novos valores**\na:%i\nb:%i", c, d,
         a, b);
  return 0;
}