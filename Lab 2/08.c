#include <stdio.h>
#include <stdlib.h>

void reverse(char *reversePalavra) {
  if (*reversePalavra) {
    reverse(reversePalavra + 1);
    printf("%c", *reversePalavra);
  }
}


int main(void) {
  int size = 0;
  char *palavra = malloc(2); 

  

  printf("Digite uma palavra: ");

  while (1) {
    if ((scanf("%c", &palavra[size])) == 1) {
      palavra[size + 1] = '\0'; 

      if (palavra[size] == '\n') {
        break;
      }

      palavra = realloc(palavra, ++size);

      if (palavra == NULL) {
        printf("Erro");
        break;
      }
    } else {
      printf("Erro");
      break;
    }
  }
  reverse(palavra);
  printf("\n\n%s", palavra);

  free(palavra);
}