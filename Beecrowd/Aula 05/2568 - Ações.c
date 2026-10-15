#include <stdio.h>

int main(){
  int d, i, x, f;
  int a;
    scanf("%d%d%d%d", &d, &i, &x, &f);
    
    for(a = d+1 ; a <= d + f ; a++){
    
      if(a%2 == 0){
        i += x;
      } else {
          i -= x;
      }

    }
    
    printf("%d\n", i);
  return 0;
}
