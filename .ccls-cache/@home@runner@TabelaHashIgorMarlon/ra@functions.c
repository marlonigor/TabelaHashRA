#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "structures.h"

int funcao_Esp(int RA){
  return (RA % tam);
}

MatAluno* insere_Esp(Hash tab, int RA, char* name, char* mail, char* turma){
  int h = funcao_Esp(RA);

  while (tab[h] != NULL){
    if (tab[h]->RA == RA)
      break;

    h = (h + 1) % tam;
  }

  if (tab[h] == NULL){
    tab[h] = (MatAluno*)malloc(sizeof(MatAluno));
    tab[h]->RA = RA;
  }
  strcpy(tab[h]->nome, name);
  strcpy(tab[h]->email, mail);
  tab[h]->turma = turma;

  return tab[h];
}

void remove_Esp(Hash tab, int RA){
  int h = funcao_Esp(RA);

  if (tab[h] != NULL && tab[h]->RA == RA){
    free(tab[h]);
    tab[h] = NULL;
    printf("\nRA não encontrado");
  }
}

MatAluno* busca_Esp(Hash tab, int RA){
  int h = funcao_Esp(RA);

  while (tab[h] != NULL){
    if (tab[h]->RA == RA){
      return tab[h];
    }
    h = (h + 1) % tam;
  }
  return NULL;
}

int tamanho_Esp(Hash tab){
  int contador = 0;
  int total = 0;

  while(contador < tam){
    if(tab[contador] != NULL){
      total++;
    }
    contador ++;
  }
  return total;
}