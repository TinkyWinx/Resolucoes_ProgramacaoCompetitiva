#include <stdio.h>

int main (){
  int bolinhas, galhos, comprar, aux;
  scanf("%d%d",&bolinhas,&galhos);
  
  aux = (galhos/2);
  comprar = aux-bolinhas;
  
  if (comprar <= 0){
    printf("Amelia tem todas bolinhas!\n");
  } else {
    printf("Faltam %d bolinha(s)\n", comprar);
  }

  return 0;
}
