# include <stdio.h>

void reverse(char *charPalavra){
   if (*charPalavra){
       reverse(charPalavra+1);
       printf("%c", *charPalavra);
   }
}

int main(){
   char palavra[] = "Mariana";
   reverse(palavra);
   return 0;
}