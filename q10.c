#include <stdio.h>

int main() {
  float altura, comprimento, largura, volume;
  printf("Qual a altura?:\n", altura);
  scanf("%f", &altura);
  printf("Qual a comprimento?:\n", comprimento);
  scanf("%f", &comprimento);
  printf("Qual a largura?:\n", largura);
  scanf("%f", &largura);
  volume = altura * comprimento * largura;
  printf("O volume é de:%.2f metros\n", volume);
  return 0;
}