#include <stdio.h>

int main (){
  int rodadas, aldo, beto, aux1, aux2;
  int teste = 1;
  
  while (scanf("%d", &rodadas) == 1 && rodadas != 0){
    printf ("Teste %d\n",teste);
    
      aux1 = 0;
      aux2 = 0;
    
      for (int i = 1 ; i <= rodadas ; i++){
        scanf("%d%d",&aldo,&beto);
       
        aux1 += aldo;
        aux2 += beto;
      
      } if (aux1 > aux2){
          printf("Aldo\n");
        } else if (aux2 > aux1){
          printf("Beto\n");
        } 
        printf ("\n");
    teste++;
  }
  return 0;
}
