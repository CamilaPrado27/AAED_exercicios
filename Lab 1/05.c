#include <stdio.h>
#include <stdlib.h>

int main(){
  int matrizA[3][3];
  int matrizB[3][3];
  int matrizC[3][3];

  printf("MatrizA\n");
  for (int i = 0; i < 3; i++){
    for (int j = 0; j<3; j++){
      printf("Digite o valor da matrizA[%d, %d]: ", i, j);
      scanf("%d", &matrizA[i][j]);
    }
  }

  printf("\n\nMatrizB\n");

  for (int i = 0; i < 3; i++){
    for (int j = 0; j<3; j++){
      printf("Digite o valor da matrizA[%d, %d]: ", i, j);
      scanf("%d", &matrizB[i][j]);
    }
  }
  
  for (int i = 0; i < 3; i++){
    for (int j = 0; j<3; j++){
      matrizC[i][j] = matrizA[i][j] * matrizB[i][j];
    }
  }

  printf("\n\nDigite o valor da matrizA\n");
  for (int i = 0; i < 3; i++){
    for (int j = 0; j<3; j++){
     printf("%d ", matrizA[i][j]);
    }
    printf("\n");
  }
  
  printf("\n\nDigite o valor da matrizB\n");
  for (int i = 0; i < 3; i++){
    for (int j = 0; j<3; j++){
      printf("%d ", matrizB[i][j]);
    }
    printf("\n");
  }
  
  printf("\n\nDigite o valor da matrizC\n");
  for (int i = 0; i < 3; i++){
    for (int j = 0; j<3; j++){
      printf("%d ", matrizC[i][j]);
    }
    printf("\n");
  }
  return 0;
}