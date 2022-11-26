#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

  int somaMedia = 0;
  int *vetor, tamanhoArray;
  float somatoria = 0;
  float media, desvioPadrao;
  
  printf("Digite o tamanho do Vetor: ");
  scanf("%d", &tamanhoArray);

  vetor = malloc(sizeof * vetor *tamanhoArray);

  for (int i = 0; i < tamanhoArray; i++){
    printf("Digite o valor %d: ", i);
    scanf("%d", &vetor[i]);

    somaMedia += vetor[i];
  }
  
  printf("\nSoma da média: %d\n", somaMedia);
  
  media = (somaMedia / tamanhoArray);
  printf("Média: %.2f", media);
  
  for (int i = 0; i<tamanhoArray; i++){
    float quadrado = pow(vetor[i] - media, 2);
    somatoria = somatoria + quadrado;
  }

  printf("\nSoma total dos vetores: %.2f", somatoria);

  
  desvioPadrao = sqrt(somatoria / (tamanhoArray - 1));

  printf("\n\n Desvio Padrão = %.2f ", desvioPadrao);

  return 0;
}