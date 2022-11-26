// Implemente um TAD que tenha as informações sobre um carro.
// O carro deve ter as seguintes informações:
// •Marca
// •Ano
// •Cor
// •Quilômetros Rodados
// •Tipo de Motor (1.0, 1.6, 2.0, etc...)



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ponto.h"

struct carro{
  char *marca, *cor;
  int ano, kmRodados;
  float motor;
};

Carro* novo_carro(char *marca, int ano, char *cor, int kmRodados, float motor){
  Carro *a = (Carro*)malloc(sizeof(Carro));

  if (a != NULL){
    a->marca = (char*) malloc(50*sizeof(char));
    strcpy(a->marca, marca);

    a-> cor =(char*) malloc(50*sizeof(char));
    strcpy(a->cor, cor);

    a-> ano = ano;
    a-> kmRodados = kmRodados;
    a-> motor = motor;
  }
  return  a;
}

void exclui_carro(Carro *a){
  free(a);
}
void acessa_carro(Carro *a, char **marca, int *ano, char **cor, int *kmRodados, float *motor){
  *marca = a-> marca;
  *ano = a->ano;
  *cor = a->cor;
  *kmRodados = a->kmRodados;
  *motor = a->motor;
}

void editar_carro(Carro *a, char *marca, int ano, char *cor, int kmRodados, float motor){
  strcpy(a->marca, marca);
  strcpy(a->cor, cor);
  a->ano = ano;
  a-> kmRodados = kmRodados;
  a->motor = motor;
}