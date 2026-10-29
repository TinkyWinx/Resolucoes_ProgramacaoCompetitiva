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
        direita[m]++; // aqui pega a quantidade de todos os tenis com o mesmo numero e o mesmo lado
      } else {
        esquerda[m]++;
      }
    }
      total = 0;
      
    for(i = 30 ; i <= 60 ; i++){ // faixa de possiveis numeros de tenis [30,60]
      
      if(direita[i] < esquerda[i]){ // como juntei os numeros dos tenis, o menor deles vai ser a quantidade de par, pois ambos precisam de si
        total += direita[i];
      } else{
        total += esquerda[i];
      }
    }
    printf("%d\n", total);
  }
  return 0;
}

// vetores deuxa o codigo fei :(
