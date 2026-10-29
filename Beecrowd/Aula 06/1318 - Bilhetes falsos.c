#include <stdio.h>

int main (){
  int n, m, t, total;
  int i, j;
  int bilhetes[10001] = {0};
  
  while(scanf("%d%d", &n, &m) == 2 && n + m != 0){
    for(i = 0; i <= n; i++){ // esse for éh para zerar todos os vetores, e nao somar nas outras casas de testes
    bilhetes[i] = 0;
    }
    
    for(i = 0; i < m; i++){ 
      scanf("%d", &t);
      bilhetes[t]++; //essa parte eh confusa. Cada bilhete (que no caso eh m) se agrupa na sua casinha de vetor. EX: 3m = 1 3 3 o v[1] = 1(quant de m iguais com aquele num), v[2] = 0, v[3] = 2
    }
    total = 0;
    for(i = 1 ; i <= n; i++){ // aqui eh a contagem dos bilhetes que sao verdadeiros
      
      if (bilhetes[i] > 1){ // logo, se esse bilhete verdadeiro eh > 1, eh pq tem bilhete repetido
        total++;
        }
      }
    printf("%d\n", total);
  }
  return 0;
}
