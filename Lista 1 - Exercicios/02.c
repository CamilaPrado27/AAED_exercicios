#include <stdio.h>
#include <stdio.h>

int main(){
    int x = 10;
    char y = 'c';
    float z = 1.2;

    printf("Variaveis antes da modificação: \n");
    printf("Variável do tipo inteiro: %i \n", x);
    printf("Variável do tipo char: %c \n", y);
    printf("Variável do tipo real: %.2f \n", z);

    int *px = &x;
    char *py = &y;
    float *pz = &z;
    
    *px = 2;
    *py = 'h';
    *pz = 3.9;

    printf("\nVariaveis depois da modificação: \n");
    printf("Variável do tipo inteiro: %i \n", x);
    printf("Variável do tipo char: %c \n", y);
    printf("Variável do tipo real: %.2f \n", z);
}
