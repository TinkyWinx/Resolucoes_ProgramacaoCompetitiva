#include <stdio.h>

int main (){
  int h, m, horas, min;
  
  while(scanf("%d%d", &h, &m) != EOF){
    horas = h/30;
    min = m/6;
    
    printf("%02d:%02d\n", horas, min);
  }

  return 0;
}
