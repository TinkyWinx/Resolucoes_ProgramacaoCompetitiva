#include <stdio.h>

int main (){
    char nome[50];
    double valor_fixo,total_vendas,total_receber;

    scanf("%s%lf%lf",&nome,&total_vendas,&valor_fixo);
    total_vendas = total_vendas*0.15;

    total_receber = valor_fixo+total_vendas;

    printf("TOTAL = %.2lf\n",total_receber);
    return 0;
}
