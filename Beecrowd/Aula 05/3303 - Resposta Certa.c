#include <stdio.h>

int main(){
  int n, r, i;
    scanf("%d", &n);
    
  for(i = 1 ; i <= n ; i++){
    scanf("%d", &r);
    
    printf ("resposta %d: %d\n", i, r);
  }
  
  return 0;
}
