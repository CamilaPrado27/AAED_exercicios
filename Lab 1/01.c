#include <stdio.h>
#include <stdlib.h>
int main() {
  int valores[10];
  
  for (int i = 0; i < 10; i++){
    printf("Digite o valor %d: ", i);
    scanf("%d", &valores[i]);
  }

  int menor = valores[0];
  int maior = valores[0];
  
  printf("Vetor completo: \n");
  for (int i = 0; i < 10; i++){
    
    if(valores[i] > maior){
      maior = valores[i];
    } else{
      if(valores[i] < menor){
        menor = valores[i];
      }
    }
    printf("%d ", valores[i]);
  }

  printf("\nO menor valor é %d, e seu endereço de memoria é %d", menor, &menor);
  
  printf("\nO maior valor é %d, e seu endereço de memoria é %d", maior, &maior);
  
  return 0
}