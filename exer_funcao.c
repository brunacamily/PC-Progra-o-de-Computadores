//Crie uma func¸ao que recebe como par ˜ ametro um n ˆ umero inteiro e devolve o seu dobro.

#include <stdio.h>

int dobro(void);

int main(){
   int resultado;
   resultado = dobro();
   printf("O dobro do que foi inserido foi: %d", resultado);
}

int dobro(void){
     int num, dob;
    printf("Digite um inteiro: ");
    scanf("%d", &num);
    dob = num * 2;
    return dob;
}
