#include <stdio.h>

int main(){
    double pi,raio,volume,aux;
    scanf("%lf",&raio);

    pi = 3.14159;
    aux = raio*raio*raio;

    volume = (4.0/3.0)*pi*aux;

    printf("VOLUME = %.3lf\n",volume);
    return 0;
}
