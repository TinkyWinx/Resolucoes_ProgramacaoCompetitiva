#include <stdio.h>

int main(){
    int funcionario,horas;
    double valor,salario;
    scanf("%d%d",&funcionario,&horas);
    scanf("%lf",&valor);

    salario = valor*horas;

    printf("NUMBER = %d\n",funcionario);
    printf("SALARY = U$ %.2lf\n",salario);

    return 0;
}
