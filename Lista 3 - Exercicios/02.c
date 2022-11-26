#include <stdio.h>
#include <stdlib.h>

void maximoDivisorComum(int x, int y){
  if (x < y){
    return maximoDivisorComum(y, x);
  } else{
    if (x % y == 0){
      printf("MDC = %d", y);
    } else{
      return maximoDivisorComum(y, x%y);
    }
  }
}

int main(){
  maximoDivisorComum(10, 6);
}