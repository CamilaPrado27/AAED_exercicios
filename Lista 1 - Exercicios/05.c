int main() {

  int matriz[6][6];
  int *pmatriz[6][6];
  
  // Matriz estatica - sem ponteiros
  for (int i = 0; i < 6; i++){
    for (int j = 0; j < 6; j++){
      printf("Digite o valor da matriz[%d, %d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("Matriz estatica - sem ponteiros! \n");
  for (int i = 0; i < 6; i++){
    for (int j = 0; j < 6; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz estatica - Com ponteiros!\n");
  for (int i = 0; i < 6; i++){
    for (int j = 0; j < 6; j++){
      pmatriz[i][j] = &matriz[i][j];
    }
  }

  for (int i = 0; i < 6; i++){
    for (int j = 0; j < 6; j++){
      printf("%d ", *pmatriz[i][j]);
    }
    printf("\n");
  }
}