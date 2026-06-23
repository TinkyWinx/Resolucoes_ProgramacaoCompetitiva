#include <stdio.h>

int main(){
    double n1,n2,n3,n4,media,notaexame, aux;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
    
    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

    if(media >= 7.0){
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
    } else if (media < 5.0){
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    } else if (media >= 5.0 && media <= 6.9){
        printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");
      
      scanf ("%lf",&notaexame);
      
      aux = (media+notaexame)/2;
      
        printf("Nota do exame: %.1lf\n", notaexame);
        printf("Aluno aprovado.\n");
        printf("Media final: %.1lf\n", aux);
    }
  return 0;
}
