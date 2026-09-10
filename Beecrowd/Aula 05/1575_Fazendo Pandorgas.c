#include <stdio.h>

int main (){
  int quantpi, bambu1, bambu2, area, i;
  
  scanf("%d", &quantpi);
  
  for (i = 0 ; i < quantpi ; i++){
    scanf ("%d%d", &bambu1, &bambu2);
    
    area = (bambu1*bambu2)/2;
    
    printf("%d cm2\n",area);
  }
  
  return 0;
}
