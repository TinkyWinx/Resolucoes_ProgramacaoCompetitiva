#include <stdio.h>

int main(){
  int s, i;
  
  while(scanf("%d", &s) == 1 && s != 2002){  
    printf("Senha Invalida\n");
  }
  
  if(s == 2002){
    printf("Acesso Permitido\n");
  }
  
  return 0;
}
