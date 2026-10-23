#include <stdio.h>

int main(){
  int m, n, i, sum, aux;
  
  while(scanf("%d%d", &m, &n) == 2 && m > 0 && n > 0){
    
    if (m > n){
      aux = m;
      m = n;
      n = aux;
    }
    
    sum = 0;
    for(i = m ; i <= n ; i++){
      printf("%d ", i);
      sum += i; 
    }
    
    printf("Sum=%d\n", sum);
  }

  return 0;
}
