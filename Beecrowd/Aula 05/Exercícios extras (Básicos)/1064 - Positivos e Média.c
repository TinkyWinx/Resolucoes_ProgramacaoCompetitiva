#include <stdio.h>

int main(){
  int totalp, i;
  double n, media;

  for( i = 0; i < 6; i++){
      scanf("%lf",&n);
      if(n >= 0){
          totalp++;
          media += n;
      }
  }
    printf("%d valores positivos\n",totalp);
    printf("%.1lf\n", media/totalp);
  return 0;
}
