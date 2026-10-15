#include <stdio.h>

int main (){
  int n, comp, varetas, retangulo, aux;
  int i;
  
  while(scanf("%d", &n) == 1 && n != 0){
    aux = 0;
    for(i = 0 ; i < n; i++){
      scanf("%d%d", &comp, &varetas);
      
      aux += varetas/2;
     }
     retangulo = aux/2;
     printf("%d\n", retangulo);
  }
  
  return 0;
}
