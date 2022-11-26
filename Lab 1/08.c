#include <stdio.h>
#include <stdio.h>

int main(){
  char *a, *b;
  a = "abacate";
  b = "uva";
  if(a < b){ //endereço
    printf("%s vem antes de %s\n",a,b);
  } else {
    printf("%s vem depois de %s\n",a,b);
  }
}

// o algoratimo acima está referenciando os endereços de memoria;