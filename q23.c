#include <stdio.h>

int main() {
    int numero, centenas, dezenas, unidades;
    printf("Digite um numero de tres digitos: ");
    scanf("%d", &numero);
    unidades = numero % 10;
    numero = numero / 10;
    dezenas = numero % 10;
    numero = numero / 10;
    centenas = numero % 10;
    numero = unidades * 100 + dezenas * 10 + centenas;
    printf("O numero com os digitos na ordem inversa e: %d", numero);
    return 0;
}