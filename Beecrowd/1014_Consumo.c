#include <stdio.h>

int main (){
    double distancia,combustivel, total;
    scanf("%lf%lf",&distancia,&combustivel);

    total  = distancia/combustivel;

    printf("%.3lf km/l\n",total);
    return 0;
}
