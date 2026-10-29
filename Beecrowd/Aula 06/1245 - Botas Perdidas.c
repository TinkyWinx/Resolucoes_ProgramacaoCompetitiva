#include <stdio.h>

int main(){
  int n, m, i, total; 
  char l;
  
  while(scanf("%d", &n) != EOF){
    int direita[61] = {0};
    int esquerda[61] = {0};
    
    for(i = 0 ; i < n ; i++){
    scanf("%d %c", &m, &l);
    
      if (l == 'D'){
        direita[m]++;
      } else {
        esquerda[m]++;
      }
    }
      total = 0;
      
    for(i = 30 ; i <=60 ; i++){
      
      if(direita[i] < esquerda[i]){
        total += direita[i];
      } else{
        total += esquerda[i];
      }
    }
    printf("%d\n", total);
  }
  return 0;
}
