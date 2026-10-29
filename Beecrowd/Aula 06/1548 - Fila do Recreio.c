#include <stdio.h>

int main(){
  int n, m, aux, total;
  int i, j, k;
  int nota[1000]; // vetor responsável para a troca de notas
  int original[1000]; // vetor que vai manter o original e comparar no final para ver quais mudanças aconteceram
    scanf("%d", &n);
    
  for(i = 0; i < n ; i++){
    scanf("%d", &m);
  for(j = 0; j < m ; j++){  
    scanf("%d", &nota[j]); // aqui vai receber meus valores para cada indice dos vetores
    original[j] = nota[j]; // aqui q vai armazenar o original
  }
  
  for(j = 0; j < m - 1; j++){ // esse for eh o responsavel para controlar as rodadas para comparação
    for(k = 0; k < m - 1 - j ; k++){ // ja esse eh o responsavel pela comparação entre os indices
      
      if (nota[k] < nota[k + 1]){ // esse if eh responsavel por colocar em ordem descrescente
        aux = nota[k]; //aux eh necessario para n perder o valor original do indice nota[k]
        nota[k] = nota[k + 1];
        nota[k + 1] = aux;
        
      }
    }
  }
    total = 0;
    for(j = 0; j < m; j++){ // aqui percorre novamente pelos indices
      if(original[j] == nota[j]){ // compara o indice inicial e o indice dps da ordenação
        total++;
      }
    }
    printf("%d\n", total);
  }
  return 0;
}
