#include <stdio.h>

int main(){
  int monica, filho1, filho2, filho3;
  scanf("%d%d%d",&monica,&filho1,&filho2);
  
  filho3 = monica - (filho1 + filho2);
  
  if (filho1 > filho2 && filho1 > filho3){
      printf("%d\n",filho1);
  } else if (filho2 > filho1 && filho2 > filho3){
      printf("%d\n",filho2);
  } else {
      printf("%d\n",filho3);
  }

  return 0;
}
