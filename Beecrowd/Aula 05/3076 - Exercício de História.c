#include <stdio.h>

int main(){
  int n, seculo;
  
  while(scanf("%d", &n) != EOF){
    seculo = ((n - 1)/100) + 1;
    
    printf("%d\n", seculo);
  }

  return 0;
}
