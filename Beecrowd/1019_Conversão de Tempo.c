#include <stdio.h>

int main(){
    int segundos,minutos,horas,n;
    scanf("%d",&n);

    horas = n/3600;
    segundos = n%3600;

    minutos = segundos/60;
    segundos = segundos%60;

    printf("%d:%d:%d\n",horas,minutos,segundos);
    return 0;
}
