#include <stdio.h>

int main(){
    int n,p,q;
    char c;
    scanf("%d%d ",&n,&p);
    scanf("%c ",&c);
    scanf("%d",&q);
    
    if(c == 43){
         if(n >= p+q){
          printf("OK\n");
      } else {
          printf("OVERFLOW\n");
        }
    } else if(c == 42){
           if(n >= p*q){
              printf("OK\n");
      } else {
          printf("OVERFLOW\n");
         }
    }
  return 0;
}
