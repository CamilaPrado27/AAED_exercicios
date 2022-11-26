typedef struct carro Carro;
Carro* novo_carro(char *marca, int ano, char *cor, int kmRodados, float motor);

void exclui_carro(Carro *a);
void acessa_carro(Carro *a, char **marca, int *ano, char **cor, int *kmRodados, float *motor);

void editar_carro(Carro *a, char *marca, int ano, char *cor, int kmRodados, float motor);
