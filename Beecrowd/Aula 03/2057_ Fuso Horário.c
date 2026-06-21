#include <stdio.h>

int main(){
    int s,t,f,horaatual;
    scanf ("%d%d%d",&s,&t,&f);
    
    horaatual = s+t+f;
    
    if(s+t+f >= 24){
      horaatual = horaatual-24; 
    } else if(s+t+f < 0){
      horaatual = horaatual+24;
      }
      printf("%d\n", horaatual);
  return 0;
}
