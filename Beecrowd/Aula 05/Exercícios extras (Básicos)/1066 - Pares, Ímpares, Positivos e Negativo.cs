#include <stdio.h>

int main(){
  int i, n;
  int par = 0, impar = 0, posit = 0, negat = 0;
  
  for(i = 0 ; i < 5 ; i++){
    scanf("%d", &n);
    
    if(n%2 == 0){
      par++;
    } if(n%2 != 0){
      impar++;
    } if(n > 0){
      posit++;
    } if(n < 0){
      negat++;
    }
  }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", posit);
    printf("%d valor(es) negativo(s)\n", negat);
  return 0;
}
