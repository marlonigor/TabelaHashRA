#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structures.h"


int main(){
  
  Hash tabela;
  int opcao, RA;
  char nome [81], email[41], turma;
  MatAluno* aluno;

  for (int i = 0; i < tam; i++){
    tabela[i] = NULL;
}

  while (1){
    printf("\n1. Inserir aluno");
    printf("\n2. Remover aluno");
    printf("\n3. Buscar aluno");
    printf("\n4. Tamanho da tabela");
    printf("\n5. Sair");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &opcao);

      switch (opcao){
        case 1:
          printf("Digite o RA do aluno: ");
          scanf("%d", &RA);
          printf("Digite o nome do aluno: ");
          scanf(" %[^n]s", nome);
          printf("Digite o email do aluno: ");
          scanf(" %[^n]s", email);

          insere_Esp(tabela, RA, nome, email, turma);
          break;

        case 2:
          printf("Digite o RA do aluno a ser removido: ");
          scanf("%d", &RA);
      }
}