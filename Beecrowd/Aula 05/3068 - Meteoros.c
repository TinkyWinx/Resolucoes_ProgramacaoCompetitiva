#include <stdio.h>

int main (){
  int x1, y1, x2, y2;
  int n, x, y, i, total, teste = 1;
  
  while(scanf("%d%d%d%d", &x1, &y1, &x2, &y2) == 4 && (x1 != 0 || y1 != 0 || x2 != 0 || y2 != 0)){
    total = 0;
    scanf("%d", &n);
    
    for(i = 1 ; i <= n ; i++){
      scanf("%d%d", &x, &y);
      
      if (x >= x1 && x <= x2 && y <= y1 && y >= y2){
        total++;
      }
    }
    printf("Teste %d\n", teste);
    printf("%d\n", total);
    teste++;
  }
  
  return 0;
}
