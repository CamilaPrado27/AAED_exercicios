typedef struct numerosComplexos NumerosComplexos;

NumerosComplexos* cria_numero_complexo(int a, int b);

void libera_numero(NumerosComplexos *n);

void acessa_numero(NumerosComplexos *n, int *a, int *b);

void atribui_numero(NumerosComplexos *n, int a, int b);

