#include <stdio.h>

int main (){
  int deposito, j, z, centavos;
  int teste = 1;
  
  while (scanf ("%d", &deposito) == 1 && deposito != 0){
      
      centavos = 0;
      printf ("Teste %d\n", teste);
      
    for (int i = 1 ; i <= deposito ; i++){
      scanf("%d%d", &j,&z);
      centavos += j - z; 
      
      printf ("%d\n", centavos);
      
      }
      printf ("\n");
      teste++;
    }
  return 0;
}
