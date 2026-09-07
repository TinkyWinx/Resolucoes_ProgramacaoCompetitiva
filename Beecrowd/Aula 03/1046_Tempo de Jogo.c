#include <stdio.h>

int main(){
  int i,f,duracao;
  scanf("%d%d",&i,&f);
  
  if (i >= f){
    duracao = (f+24)-i;
    printf ("O JOGO DUROU %d HORA(S)\n", duracao);
  } else if (f > i){
      duracao = f - i;
      printf ("O JOGO DUROU %d HORA(S)\n",duracao);
  }
  return 0;
}
