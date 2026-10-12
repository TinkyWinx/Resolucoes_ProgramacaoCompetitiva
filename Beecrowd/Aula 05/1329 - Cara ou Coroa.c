#include <stdio.h>

int main(){
  int m0, j1, x;
  int n, i;
  
    while(scanf("%d", &n) == 1 && n != 0){
      m0 = 0;
      j1 = 0;
      
      for(i = 0 ; i < n ; i++){
        scanf("%d", &x);
        
        if(x == 0){
          m0++;
        } else{
          j1++;
        }
      }
      printf( "Mary won %d times and John won %d times\n", m0, j1 );
    }
  return 0;
}
