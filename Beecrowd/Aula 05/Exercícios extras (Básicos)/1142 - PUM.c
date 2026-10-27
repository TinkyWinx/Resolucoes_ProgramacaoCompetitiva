#include <stdio.h>

int main(){
  int n, j = 0, k = 0, i;
  scanf("%d", &n);
  
  for(i = 1 ; i < n*4 ; i += 3){
    j += i + 1;
    k += i + 2;
    
    printf("%d %d %d PUM\n", i, j, k);
    i += 1;
    j = 0;
    k = 0;
  }
  
  return 0;
}
