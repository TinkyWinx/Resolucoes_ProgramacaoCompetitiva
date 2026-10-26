#include <stdio.h>

int main(){
  double n, aux = 0, media;
  int notas;
  
  while(notas != 2){
    scanf("%lf", &n);
    if(n >= 0 && n <= 10.0){
      notas++;
      aux += n;
    } else {
      printf("nota invalida\n");
    }
  }
  
  media = aux/2.0;
  printf("media = %.2lf\n", media);
  return 0;
}
