#include <stdio.h>

int main() {
  int x;
  printf("Digite um valor: \n", x);
  scanf("%i", &x);
  printf(
      "O valor escolhido foi: %i\nO seu antecessor é:%i\nO seu sucessor é:%i",
      x, x - 1, x + 1);
  return 0;
}