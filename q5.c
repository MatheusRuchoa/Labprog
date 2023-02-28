#include <stdio.h>

int main(){
    float conta;
    puts("Qual o valor gasto no restaurante?");scanf("%f",&conta);
    printf("O valor a ser pago será de: R$%.2f\n", conta=conta+(conta/10));
    
    return 0;
}