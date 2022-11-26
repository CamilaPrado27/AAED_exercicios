#include <stdio.h> // Biblioteca de Entrada e Saida
#include <stdlib.h> // Biblioteca Padrao
#include "Carro.c"

int main(){
  
  char *marca, *cor;
  float motor;
  int ano, kmRodados;

  int valorGasto; 

  Carro *a[2];

  a[0] = novo_carro("ford", 2011, "preto", 0, 2.0);
  a[1] = novo_carro("gol", 2000, "preto", 0, 1.0);

  for (int i = 0; i<2; i++){
    acessa_carro(a[i], &marca, &ano, &cor, &kmRodados, &motor);
    printf("Carro %d\n", i+1);
    printf("Marca: %s Ano: %d Cor: %s km: %d Motor: %.2f", marca, ano, cor, kmRodados, motor);
    
  }
  
  editar_carro(a[0], "ford", 2011, "preto", 0, 2.0);
  editar_carro(a[1], "ford", 2011, "preto", 0, 2.0);
  
  for (int i = 0; i<2; i++){
    acessa_carro(a[i], &marca, &ano, &cor, &kmRodados, &motor);
    printf("Carro %d\n", i+1);
    printf("Marca: %s Ano: %d Cor: %s km: %d Motor: %.2f", marca, ano, cor, kmRodados, motor);
    
  }
  

  for (int i = 0; i < 2; i++){
    acessa_carro(a[i], &marca, &ano, &cor, &kmRodados, &motor);
    valorGasto = 4.259 * kmRodados * motor;

    printf("Valor gasto do carro %d ", valorGasto);
  }
  retu