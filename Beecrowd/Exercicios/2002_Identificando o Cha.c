#include <stdio.h>

int main(){
    int t,a,b,c,d,e,aux;
    scanf ("%d%d%d%d%d%d",&t,&a,&b,&c,&d,&e);
    
    if (a == t){
      aux = aux + 1;
    } if (b == t){
      aux = aux + 1;
    } if (c == t){
      aux = aux + 1;
    } if (d == t){
      aux = aux + 1;
    } if (e == t){
      aux = aux + 1;
    }
      printf("%d\n",aux);
  return 0;
}
