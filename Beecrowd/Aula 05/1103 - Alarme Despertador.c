#include <stdio.h>

int main (){
  int h1, m1, h2, m2, horas, alarme, mintotal;
  
  while (scanf("%d%d%d%d", &h1, &m1, &h2, &m2) == 4 && h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0){
  
    horas = (h1*60) + m1;
    alarme = (h2*60) + m2;
    
    if (horas > alarme){
      mintotal = (alarme + 1440) - horas;
    } else {
        mintotal = alarme - horas;
    }
    
    printf("%d\n", mintotal);
  }

  return 0;
}
