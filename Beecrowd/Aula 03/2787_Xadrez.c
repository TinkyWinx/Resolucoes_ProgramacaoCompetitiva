#include <stdio.h>

int main(){
    int l,c,cor,aux;
    scanf ("%d%d", &l,&c);
  
    aux = l+c;
    cor = aux%2; 
  
      if (cor == 1){
        printf("0\n");
      } else if (cor == 0){
        printf("1\n");
      }

  return 0;
}
