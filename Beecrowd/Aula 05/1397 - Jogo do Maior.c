#include <stdio.h>

int main(){
  int n, a, b, ven1, ven2;
  int i;
  
  while(scanf("%d", &n) == 1 && n != 0){
    ven1 = 0;
    ven2 = 0;
    for(i = 0 ; i < n ; i++){
      scanf("%d%d", &a, &b);
    
      if(a > b){
        ven1++;
      } else if (b > a){
        ven2++;
      } 
    }
    printf("%d %d\n", ven1, ven2);
  }

  return 0;
}
