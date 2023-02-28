#include <stdio.h>

int main(){
    float altura, peso;
    char sexo;
    puts("Qual a altura?");scanf("%f",&altura);
    puts("Seu sexo é masculino ou feminino?");scanf("%c",&sexo);
    if(sexo=='m'){
        peso=72.7*altura - 58;
    }
    else {
        peso=62.1*altura-44.7;
    }
    printf("O seu peso ideal é de: %2.fkg",peso);
    return 0;
}