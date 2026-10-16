#include <stdio.h>

int main(){
  int n,x,soma,i;
  int in = 0, out = 0; // inicialização
  scanf("%d",&n);
  
  for (i = 1 ; i <= n ; i++){ // contador de testes
    scanf ("%d", &x);
      
      if (x >= 10 && x <= 20){ // intervalo pedido no prblema
        in++; // incrementa quando verdade 
    } else {
        out++; 
    }
  }
  printf ("%d in\n",in);
  printf ("%d out\n",out);
  
  return 0;
}
