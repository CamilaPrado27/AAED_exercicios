#include <stdio.h>
#include <stdlib.h>

int main(){

  int vetor[20];
  int tamanhoArray = 20;

  for (int i = 0; i < tamanhoArray; i++){
    printf("Digite o valor do vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
  }
  printf("Array com repetições: \n");
  for (int i = 0; i < tamanhoArray; i++){
    printf("%d ", vetor[i]);
  }

  for(int i = 0; i < tamanhoArray; i++){
    for (int j = i; j < tamanhoArray; j++){

      if (vetor[j] == vetor[i]){

        for(int k = j; k < tamanhoArray; k++){
          vetor [k] = vetor[k + 1];
        }
        tamanhoArray = tamanhoArray - 1;
      } else{
        j++;
      }
    }
  }

  printf("\n\nArray sem repetições: \n");
  for (int i = 0; i < tamanhoArray; i++){
    printf("%d ", vetor[i]);
  }
}
