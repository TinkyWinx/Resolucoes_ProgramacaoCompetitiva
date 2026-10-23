#include <stdio.h>

int main(){
  int n, quantia, i;
  int total = 0, totalc = 0, totalr = 0, totals = 0; 
  double pc, pr, ps;
  char cobaia;
    scanf("%d", &n);
    
    for(i = 0 ; i < n ; i++){
      scanf("%d %c", &quantia, &cobaia);
      
      total += quantia;
      
      if(cobaia == 'C'){
        totalc += quantia;
      } else if (cobaia == 'R'){
        totalr += quantia;
      } else {
        totals += quantia;
      }      
    }
      pc = (totalc*100.0)/total;
      pr = (totalr*100.0)/total;
      ps = (totals*100.0)/total;
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalc);
    printf("Total de ratos: %d\n", totalr);
    printf("Total de sapos: %d\n", totals);
    printf("Percentual de coelhos: %.2lf %%\n", pc);
    printf("Percentual de ratos: %.2lf %%\n", pr);
    printf("Percentual de sapos: %.2lf %%\n", ps);
  return 0;
}
