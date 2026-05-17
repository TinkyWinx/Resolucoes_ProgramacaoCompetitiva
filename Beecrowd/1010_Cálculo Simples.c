#include <stdio.h>

int main(){
    int cp1,cp2,np1,np2;
    double valor1,valor2,valortotal;

    scanf("%d%d%lf",&cp1,&np1,&valor1);
    scanf("%d%d%lf",&cp2,&np2,&valor2);

    valor1 = np1*valor1;
    valor2 = np2*valor2;

    valortotal = valor1+valor2;

    printf("VALOR A PAGAR: R$ %.2lf\n",valortotal);

    return 0;
}
