#include <stdio.h>

int main(){
  int l, r, soma;
  
  while(scanf("%d%d", &l, &r) == 1 && l != 0 || r != 0){
    soma = l+r;
  
    printf("%d\n", soma);
  }

  return 0;
}
