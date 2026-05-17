#include <stdio.h>

int main(){
    double tempo,km,litros,aux;
    scanf("%lf%lf",&tempo,&km);

    aux = km*tempo;
    litros = aux/12;

    printf("%.3lf\n",litros);
    return 0;
}
