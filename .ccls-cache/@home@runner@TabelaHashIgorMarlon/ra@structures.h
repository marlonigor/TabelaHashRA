#ifndef structures_h
#define structures_h

#define tam 250

struct matricula {
  int RA;
  char nome[81];
  char email[41];
  char turma;
};
typedef struct matricula MatAluno;
typedef MatAluno* Hash[tam];

int funcao_Esp(int RA);

MatAluno* insere_Esp(Hash tab, int RA, char* name, char* mail, char* turma);

void remove_Esp(Hash tab, int RA);

MatAluno* busca_Esp(Hash tab, int RA);

int tamanho_Esp(Hash tab);

#endif