#include <stdio.h>

int main (){
  double x,y,q1,q2,q3,q4,origem,eixox,eixoy,quadrante;
  scanf ("%lf%lf",&x,&y);
  
  if (x==0 && y==0){
    quadrante = origem;
    printf("Origem\n");
  } else if (x>0 && y>0){
    quadrante = q1;
    printf("Q1\n");
  } else if (x<0 && y>0){
    quadrante = q2;
    printf("Q2\n");
  } else if (x<0 && y<0){
    quadrante = q3;
    printf("Q3\n");
  } else if (x>0 && y<0){
    quadrante = q4;
    printf("Q4\n");
  } else if (x!=0 && y==0){
    quadrante = eixox;
    printf("Eixo X\n");
  } else if (x==0 && y!=0){
    quadrante = eixoy;
    printf("Eixo Y\n");
  }
  return 0;
}
