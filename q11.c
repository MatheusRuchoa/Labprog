#include <stdio.h>
int main() {
  float real, cotacao, dolar;
  printf("Qual o valor em real?\n", real);
  scanf("%f", &real);
  printf("Qual a cotação em dolar atual?\n", cotacao);
  scanf("%f", &cotacao);
  dolar = real / cotacao;
  printf("Você possui um total de:%.2f dolares\n", dolar);
  return 0;
}