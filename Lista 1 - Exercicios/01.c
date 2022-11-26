
void ordena_vetor(int vetor[],int n){
    int k,j,aux; //1
    for(k=n-1;k>0;k--){
        printf("\n[%d] ",k);
    
        for(j=0;j<k;j++){
            printf("%d, ",j);
            
            if(vetor[j]>vetor[j+1]){
                aux=vetor[j];vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }
}

// 1° Caso
// numero de contagem = 9 + 3k

//2° Caso
// numero de contagem = 9 + 5k
