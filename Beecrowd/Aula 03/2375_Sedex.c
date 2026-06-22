#include <stdio.h>

int main (){
    int n,a,l,p;
    scanf ("%d%d%d%d",&n,&a,&l,&p);
    
    if ( n > a || n > l || n > p){
      printf("N\n");
    } else if ( n <= a && n <= l && n <= p){
      printf("S\n");
    }

  return 0;
}
