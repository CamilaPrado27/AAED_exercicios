#include <stdio.h>
#include <stdlib.h>

int verifica_ordem(int vetor[], int n){
  if(n > 1){
    for (int i = 1; i < n; i++){
      if(vetor[i-1] > vetor[i]){
        return 0;
      }
      return 1;
    }
  }
}

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
  
  if(verifica_ordem(vetor, 5)){
    printf("\n\nEstá em ordem crescente");
  } else{
    printf("\n\nEstá em ordem decrescente");
  }
  
}