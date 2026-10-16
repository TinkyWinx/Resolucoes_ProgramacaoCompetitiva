#include <stdio.h>

int main(){
  int x, y, soma = 0; // sempre inicializar um numero, se não fica indeterminado 
    scanf("%d%d", &x, &y);

  if (x < y){
    for (int i = x + 1; i < y; i++){ // intervalo entre os numeros
      if (i%2 != 0){ // pegar os impares
        soma += i;
        }
      }
    } else {
        for (int i = y + 1; i < x; i++){ // intervalo entre os numeros
          if (i%2 != 0){
            soma += i;
        }
      }
    } 
    printf("%d\n", soma);
    return 0;
}
