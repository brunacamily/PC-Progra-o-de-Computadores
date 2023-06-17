/* Faça um programa que leia uma quantidade qualquer de numeros armazenando-os na 
memoria e pare a leitura quando o usuario entrar um numero negativo. Em seguida, 
imprima o vetor lido. Use a func¸ao REALLOC. */

#include <stdio.h>
#include <stdlib.h>

struct numero{
    int num;
    struct numero *prox;
};

typedef struct numero lista;
lista *cria(void);
void insere( lista *ini, int n );
int ler(lista *ini);


int main(){
  lista *ini;
  int numNOVO;

  ini = cria();
  for(;;){
    numNOVO = ler(ini);
    insere(ini, numNOVO);
  }
}

lista *cria(void) {
  lista *start;
  start = (lista *)malloc(sizeof(lista));
  start->prox = NULL;
  return start;
}

void insere( lista *ini, int n ){
    lista *novo;
    novo = (lista*)realloc(ini,sizeof(lista));
    novo->num = n;
    novo->prox = ini->prox;
    ini->prox = novo;
}

int ler(lista *ini){
    int num;
    lista *p;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    while(num < 0){
        for (p = ini->prox; p != NULL; p = p->prox)
	     	printf("%d\n", p->num);

        exit(0);
    }
    return num;
}
