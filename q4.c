#include <stdio.h>

int main(){
    float x;
    puts("Digite um valor:");scanf("%f",&x);
    printf("Valor escolhido:%.0f\nTriplo:%.0f\nQuadruplo:%.0f\nMetade:%.2f\n", x,x*3,x*4,x/2);
    return 0;
}