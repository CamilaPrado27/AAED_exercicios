#include <stdio.h>
#include <stdlib.h>

int A(int m, int n){
  
  if (m == 0){
    return(n+1); 
  } else if (m !=0 & n == 0){
      return (A(m-1, 1));
  }else if (m !=0 & n != 0){
    return (A(m-1, A(m, n-1)));
  }
}

int main(){
  int resultado, m, n;

  printf("Sequencia de Ackermann\n\n");
  printf("Digite o primeiro valor: ");
  scanf("%d", &m);
  
  printf("Digite o segundo valor: ");
  scanf("%d", &n);
  
  resultado = A(m, n);

  printf("\nResultado: %d", resultado);
}