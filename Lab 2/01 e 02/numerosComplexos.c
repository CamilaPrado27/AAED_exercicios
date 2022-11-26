#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <numerosComplexos.h>
#include <math.h>

struct numerosComplexos{
    int a, b;
}

NumerosComplexos* cria_numeros(int a, int b){
    NumerosComplexos *n (NumerosComplexos*)malloc(sizeof(NumerosComplexos));
    if (n != NULL){
        n-> a = a;
        n-> b =b;
    }

    return n;
}

void libera_numeros(NumerosComplexos *n){
    free(n);
}

void acessa_numeros(NumerosComplexos *n, int *a, int *b){
    *a = n-> a;
    *b = n-> b;
}

void atribui_numeros(NumerosComplexos *n, int a, int b){
    n -> a = a;
    n -> b = b;
}

float soma(NumerosComplexos *a1, NumerosComplexos *a2, NumerosComplexos *b1, NumerosComplexos *b2){
    return ((a1 -> a + a2-> a) + (b1-> b, b2->)*I)
}