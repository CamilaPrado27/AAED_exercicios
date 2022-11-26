#include <stdlib.h>
#include <stdio.h>

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

int main(){
  int vetor[5] = {51, 2, 3, 4, 5};

  if(verifica_ordem(vetor, 5)){
    printf("Está em ordem crescente");
  } else{
    printf("Está em ordem decrescente");
  }
}