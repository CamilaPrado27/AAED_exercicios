
typedef struct elemento* Lista;


Lista* criaLista(void);

void liberaLista(Lista* li);


int tamanhoLista(Lista* li);


int listaVazia(Lista* li);


int removeDaLista(Lista* li, int mat);


void imprimeLista(Lista *li);