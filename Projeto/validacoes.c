#include <stdio.h>
#include <stdlib.h>
#include "valiacoes.h"

int lerEmail(void)
{
/* o que é um e-mail invalido? 

Tem mais de um '@' ou nenhum
Tem somente numerais ou nada nos extremos de '@'
Tem 1 ou mais dots (.) em sequência ou seguido de '@'
Tem parte local [antes do '@'] de tamanho maior que 64 caracteres
Tem espaço "   "
Não tem caixa de entrada. */



}


int lerCPF(void)
{


}


int lerData(void)
{


}

int lerString(void)
{


}

int lerCodigoBarras(void)
{


}

int lerEmail(void){

  char email[50]={"abc@xyz.com"};
  int tam=strlen(email);
  int arroba = 0, ponto = 0, antesPonto = 0, depoisPonto = 0, i;

  for (i = 0; i < tam; i++) {
    char c = email[i];
    if(c == '@') {
      if (arroba)
        break; // não pode ter uma segunda @
      arroba = 1;
      if (i < 3)
        break; // se @ vier antes de 3 caracteres, erro
    }
    else if (arroba) { // se já encontrou @
      if (ponto) { // se já encontrou . depois de @
        depoisPonto++;
      }
      else if(c == '.') {
        ponto = 1;
        if (antesPonto < 3) {
          break; // se . depois de @ vier antes de 3 caracteres, erro
        }
      }
      else {
        antesPonto++;
      }
    }
  } // for

    if (i == tam && depoisPonto > 1)
        printf("Valido");
    else
        printf("Invalido");


}