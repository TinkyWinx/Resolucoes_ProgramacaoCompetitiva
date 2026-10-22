#include <stdio.h>

int main (){
  int i, n;
  int maior, p;
  
  for(i = 1 ; i <= 100 ; i++){
    scanf("%d", &n);
    
    if (i == 1){
      maior = n;
      p = i;
    } if (n > maior){
      maior = n;
      p = i;
    }
  }
  
  printf("%d\n", maior);
  printf("%d\n", p);
  return 0;
}
