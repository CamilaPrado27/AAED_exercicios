#include <stdio.h>
#include <stdlib.h>

void decimalParaBinario(int valorDecimal){
  int x;
  if(valorDecimal/2!=0){
    x = valorDecimal/2;
    decimalParaBinario(x);
    printf("%d", valorDecimal % 2);
  } else{
    printf("%d", valorDecimal % 2);
  }
}

int main(){
  int valorDecimal;
  printf("Digite um numero decimal: ");
  scanf("%d", &valorDecimal);
  printf("\nResultado: ");

  decimalParaBinario(valorDecimal);
  return 0;
}

