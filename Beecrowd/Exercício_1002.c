#include <stdio.h>
 
int main() {
        double area, pi, raio, aux;
        scanf("%lf",&raio);
        
        pi = 3.14159;
        aux = raio*raio;
        area = pi*aux;
        
        printf("A=%.4lf\n", area);
   
    return 0;
}
