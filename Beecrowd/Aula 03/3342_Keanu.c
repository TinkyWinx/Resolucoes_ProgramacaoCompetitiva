#include <stdio.h>

int main(){
  int tabuleiro, brancas, pretas, area;
  scanf("%d",&tabuleiro);
  
  area = tabuleiro*tabuleiro;
  pretas = area/2;
  
  if (area%2 == 0){
    brancas = area/2;
    printf("%d casas brancas e %d casas pretas\n", brancas, pretas);
  } else {
    brancas = (area/2) + 1;
    printf("%d casas brancas e %d casas pretas\n", brancas, pretas);
  }
  return 0;
}
