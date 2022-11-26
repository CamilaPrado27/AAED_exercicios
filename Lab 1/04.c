#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int vetor[10][10];
  
  for ( int i=0; i<10; i++ ){
    for ( int j=0; j<10; j++ ){
      if (i < j){
        vetor[i][j] = 2*i + 7*j -2;
        
      } else if (i > j){
        vetor[i][j] = (4* pow(i, 3)) - (5 * pow(j, 2)) - 1;
      } else{
        vetor[i][j] = 4 * pow(i, 2) - 1;
      }
    }
  }

  for ( int  i=0; i<10; i++ ){
    for ( int j=0; j<10; j++ ){
      printf ("%d |", vetor[ i ][ j ]);
    }
    printf("\n");
  }
}

