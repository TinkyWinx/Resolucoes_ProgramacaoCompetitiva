#include <stdio.h>

int main(){
    double renda, imposto1,imposto2,imposto3,aux1,aux2, totalImp;
    scanf ("%lf", &renda);
    
      if ( renda <= 2000.00){
        imposto1 = 0;
        } if ( renda >= 2000.01 && renda <= 3000.00){
            imposto1 = (renda-2000)*8.0/100.0;  
        } if ( renda >= 3000.01 && renda <= 4500.00){
            imposto2 = (renda-3000);
            imposto1 = (renda-2000-imposto2)*8.0/100.0;
            aux1 = imposto2*18.0/100.0;
        } if ( renda > 4500.00){
            imposto3 = (renda-4500);
            imposto2 = (renda-3000-imposto3);
            imposto1 = (renda-2000-imposto2-imposto3)*8.0/100.0;
            aux1 = imposto2*18.0/100.0;
        a    ux2 = imposto3*28.0/100.0;
        } if (imposto1 == 0){
          printf ("Isento\n");
        } else {
        totalImp = imposto1+aux1+aux2;
        printf("R$ %.2lf\n", totalImp);
      }
  return 0;
}
