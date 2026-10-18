#include <stdio.h>

int main(){
  int n, q;
  int i;
  scanf("%d", &n);
  
  for(i = 1 ; i <= n ; i++){
    if(i%2 == 0){
      printf("%d^%d = %d\n", i, i, i*i);
    }
  }
  return 0;
}
