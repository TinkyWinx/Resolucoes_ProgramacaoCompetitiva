#include <stdio.h>

int main(){
  int n, a1 = 0, g2 = 0, d3 = 0;
  
  while(scanf("%d", &n) == 1 && n != 4){
    if(n == 1){
      a1++;
    } if(n == 2){
      g2++;
    } if(n == 3){
      d3++;
    }
  }
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", a1);
  printf("Gasolina: %d\n", g2);
  printf("Diesel: %d\n", d3);

  return 0;
}
