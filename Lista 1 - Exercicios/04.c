#include <stdio.h>
#include <stdlib.h>

int main() {
  int tamanhoArray;
  int *vetor;


  printf("Digite o tamanho do Vetor: ");
  scanf("%d", &tamanhoArray);

  vetor = malloc(sizeof * vetor *tamanhoArray);

  if (vetor == NULL){
    puts("Erro ao alocar memoria!");
    return 1;
  }

  for (int i = 0; i < tamanhoArray; i++){
    printf("Digite o valor %d: ", i);
    scanf("%d", &vetor[i]);
  }

  printf("\n Array completo: \n");
  for (int x = 0; x < tamanhoArray; x++){
    printf("%d ", vetor[x]);
  }
  
}