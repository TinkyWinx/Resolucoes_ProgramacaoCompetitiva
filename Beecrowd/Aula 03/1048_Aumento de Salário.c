#include <stdio.h>

int main (){
  double salario,reaju,valor,aux1,aux2;
  scanf ("%lf",&salario);

  if (salario>=0 && salario<=400.00){
    aux1 = salario*(15.0/100.0);
    aux2 = salario+aux1;
      printf("Novo salario: %.2lf\n", aux2);
      printf("Reajuste ganho: %.2lf\n",aux1);
      printf("Em percentual: 15 %%\n");
  } else if (salario <= 800.00){
    aux1 = salario*(12.0/100.0);
    aux2 = salario+aux1;
      printf("Novo salario: %.2lf\n", aux2);
      printf("Reajuste ganho: %.2lf\n",aux1);
      printf("Em percentual: 12 %%\n");
    } else if (salario <= 1200.00){
    aux1 = salario*(10.0/100.0);
    aux2 = salario+aux1;
      printf("Novo salario: %.2lf\n", aux2);
      printf("Reajuste ganho: %.2lf\n",aux1);
      printf("Em percentual: 10 %%\n");
  } else if (salario <= 2000.00){
    aux1 = salario*(7.0/100.0);
    aux2 = salario+aux1;
      printf("Novo salario: %.2lf\n", aux2);
      printf("Reajuste ganho: %.2lf\n",aux1);
      printf("Em percentual: 7 %%\n");
  } else if (salario>2000.00){
    aux1 = salario*(4.0/100.0);
    aux2 = salario+aux1;
      printf("Novo salario: %.2lf\n", aux2);
      printf("Reajuste ganho: %.2lf\n",aux1);
      printf("Em percentual: 4 %%\n");
  }
  return 0;
}
