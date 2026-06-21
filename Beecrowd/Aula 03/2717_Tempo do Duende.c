#include <stdio.h>

int main (){
    int n,a,b,aux;
    scanf("%d%d%d",&n,&a,&b);

    aux = a+b;
    
    if( n >= aux){
      printf("Farei hoje!\n");
    } else if ( n < aux){
      printf("Deixa para amanha!\n");   
    }

  return 0;
}
