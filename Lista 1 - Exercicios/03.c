
int main(){
  int var1, var2;

  printf("Digite um valor para a variavel 1: ");
  scanf("%i", &var1);
  printf("%d", &var1);
  printf("\n Digite um valor para a variavel 2: ");
  scanf("%i", &var2);
  printf("%d", &var2);
  

  if (&var1 > &var2){
    printf("\nMaior endereço é o da variável 1!");
    printf("\n O conteúdo dessa variavel é:  %i", var1);
  } else{
    printf("\nMaior endereço é o da variável 2!");
    printf("\n O conteúdo dessa variavel é:  %i", var2);
  }

  
}