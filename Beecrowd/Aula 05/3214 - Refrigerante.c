#include <stdio.h>

int main (){
  int e, f, c, totalg, totalr = 0;
    scanf("%d%d%d", &e, &f, &c);
    
    totalg = e+f;
    
    while(totalg >= c){
      totalg = totalg - c + 1;
      totalr++;
    }
  
    printf("%d\n", totalr);
  return 0;
}
