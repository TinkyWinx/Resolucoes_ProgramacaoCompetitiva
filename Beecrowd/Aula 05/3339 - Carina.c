#include <stdio.h>

int main(){
  int q, l, r, qp;
  int i, a;
    scanf("%d", &q);
    
  for(i = 0 ; i < q ; i++){
    scanf("%d%d", &l, &r);
    qp = 0;
    
    for(a = 0; a * a <= r; a++){
      if(a * a >= l){
        qp++;
      }
    }
    printf("%d\n", qp);
  }
  return 0;
}
