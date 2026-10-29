#include <stdio.h>

int main(){
  int n, i, menor, posicao = 0;
  scanf("%d", &n);
  int v[n];
  
  for(i = 0; i < n; i++){
    scanf("%d", &v[i]);
    
    if(i == 0){
      menor = v[i];
    }
    
     if (v[i] < menor){
        menor = v[i];
        posicao = i;
        
     }
  }
  printf("Menor valor: %d\n", menor);
  printf("Posicao: %d\n", posicao);

  return 0;
}
