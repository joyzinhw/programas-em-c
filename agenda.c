#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define Tam_Agenda 3

struct Contact {

  char nome[50];
  char telefone[20];
  char email[50];
};

int escolha();
void cadastro(struct Contact ag[], int *qtd);
void consulta(struct Contact ag[], int qtd);
void altera(struct Contact ag[], int qtd);
void listar(struct Contact ag[], int qtd);

int main() {
  struct Contact agenda[Tam_Agenda];
  int quantidade = 0;
  int opcao;

  while (opcao != 5) {

    printf("\nAgenda Eletrônica ETC \n");
    printf("\n");
    printf("No momento existem %d contatos cadastrados na sua agenda \n \n", quantidade);    


    opcao = escolha();
    switch (opcao) {
    case 1:
      cadastro(agenda, &quantidade);
      break;
    case 2:
      consulta(agenda, quantidade);
      break;
    case 3:
      altera(agenda, quantidade);
      break;
    case 4:
      listar(agenda, quantidade);
      break;


    }
  }
}

int escolha() {
  int x;
  printf("Olá, seja bem vindo ao seu sistema de agenda. O que você deseja fazer hoje? \n");
  printf("\n");
  printf("1- Cadastrar \n");
  printf("2- Consultar \n");
  printf("3- Alterar \n");
  printf("4- Listar \n");
  printf("5- Nada \n");
  printf("\n");
  scanf("%d", &x);
  printf("\n");
  return x;
}

void cadastro(struct Contact ag[], int *qtd) {
  if (*qtd == Tam_Agenda) {
    puts("Agenda lotada.");
  } else {
    printf("Posição: %d°\n", *qtd + 1);
    printf("Nome: ");
    scanf("%s", ag[*qtd].nome);
    printf("Telefone: ");
    scanf("%s", ag[*qtd].telefone);
    printf("Email: ");
    scanf("%s", ag[*qtd].email);
    (*qtd)++;
  }
}

void consulta(struct Contact ag[], int qtd) {
  int pos;
  printf("Digite a posição do contato que você deseja consultar: ");
  scanf("%d", &pos);
  printf("\n");
  if (pos < 1 || pos > qtd)
    printf("Posição inválida/inexistente");
  else {
    printf("Posicao: %d\n", pos);
    printf("Nome: %s\n", ag[pos - 1].nome);
    printf("Telefone: %s\n", ag[pos - 1].telefone);
    printf("Email: %s\n", ag[pos - 1].email);
  }
}

void altera(struct Contact ag[], int qtd) {
}

void listar(struct Contact ag[], int qtd) {
  if (qtd > 0) {
    for (int i = 0; i < qtd; i++) {
      printf("Posição: %d\n", i + 1);
      printf("Nome: %s\n", ag[i].nome);
      printf("Telefone: %s\n", ag[i].telefone);
      printf("Email: %s\n", ag[i].email);
    }
  } else
    printf("A agenda está vazia. \n");
}