
#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <numerosComplexos.c>
#include <math.h>


int main(){
    int a, b, soma;
    NumerosComplexos *n[2] *p, *q;

    n[0] = cria_numeros(1, 2);
    n[1] = cria_numeros(2, 4);

    p = cria_numeros(1, 2);
    q = cria_numeros(2, 4);



    for (int = 0; i < 2; i++){
        acessa_numeros( n[i], &a, &b );
        valor_absoluto = sqrt(pow(a, 2) + pow(b, 2));
        printf("%d ", valor_absoluto);
    }

    soma = soma(p, q);
    printf("\n %d", soma);

    for(i = 0; i < 2; i++)
        libera_numero(a[i]);

    libera_numero[p];
    libera_numero[q];

}
