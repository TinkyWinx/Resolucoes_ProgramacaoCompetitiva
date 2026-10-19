#include <stdio.h>

int main(){
  int n, x;
  int i;
  scanf("%d", &n);
  
  for(i = 0 ; i < n ; i++){
    scanf("%d", &x);
    
    if (x == 0){
      printf("NULL\n");
        
    } else if(x%2 == 0 && x > 0){
      printf("EVEN POSITIVE\n");  
    } else if (x%2 == 0 && x < 0){
      printf("EVEN NEGATIVE\n");
      
    } else if(x%2 != 0 && x > 0){
      printf("ODD POSITIVE\n");
    } else if (x%2 != 0 && x < 0){
      printf("ODD NEGATIVE\n");
    }
  }
  return 0;
}
