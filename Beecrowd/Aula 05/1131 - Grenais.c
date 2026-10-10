#include <stdio.h>

int main(){
  int ven1 = 0, ven2 = 0, empate = 0;
  int inter, gremio, grenals = 0;
  int opcao = 1;
  
  while (opcao == 1){
    scanf ("%d%d", &inter, &gremio);
    grenals++;
      
       if (inter > gremio){
      ven1 += 1;
    } else if (gremio > inter){
      ven2 += 1;
    } else {
      empate += 1;
    }
    
      printf("Novo grenal (1-sim 2-nao)\n");
      scanf ("%d", &opcao);   
    }

  printf("%d grenais\n", grenals);
  printf("Inter:%d\n", ven1);
  printf("Gremio:%d\n", ven2);
  printf("Empates:%d\n", empate);
  
    if (ven1 > ven2){
      printf ("Inter venceu mais\n");
    } else if (ven2 > ven1){
      printf ("Gremio venceu mais\n");
    } else {
      printf ("Nao houve vencedor\n");
    }
    
  return 0;
}
