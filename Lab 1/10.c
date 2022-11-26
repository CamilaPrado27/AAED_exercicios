#include <stdlib.h>
#include <stdio.h>

int main(){
  int primeiraLinhaMatriz[4];
  int segundaLinhaMatriz[1];
  int terceiraLinhaMatriz[2];
  int quartaLinhaMatriz[4];


  int numeroPrimeiraLinha = 44;
  int numeroTerceiraLinha = 87;
  int numeroQuartaLinha = 68;
  
  for (int i = 0; i<4; i++){
    primeiraLinhaMatriz[i] = numeroPrimeiraLinha;
    numeroPrimeiraLinha = numeroPrimeiraLinha + 11;
  }
  for (int i = 0; i< 1; i++){
    segundaLinhaMatriz[i] = 36;
  }
  for (int i = 0; i<2; i++){
    
    terceiraLinhaMatriz[i] = numeroTerceiraLinha;
    numeroPrimeiraLinha = numeroTerceiraLinha + 10;
  }
  for (int i = 0; i<3; i++){
    
    quartaLinhaMatriz[i] = numeroQuartaLinha;
    numeroQuartaLinha = numeroQuartaLinha + 10;
  }

  for (int i = 0; i < 4; i++){
    printf("%d ", primeiraLinhaMatriz[i] );
  }
  printf("\n");
  for (int i = 0; i < 1; i++){
    printf("%d ", segundaLinhaMatriz[i] );
  }
  printf("\n");
  for (int i = 0; i < 2; i++){
    printf("%d ", terceiraLinhaMatriz[i] );
  }
  printf("\n");
  for (int i = 0; i < 3; i++){
    printf("%d ", quartaLinhaMatriz[i] );
  }
}