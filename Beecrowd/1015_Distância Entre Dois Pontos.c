#include <stdio.h>
#include <math.h>

int main(){
	float x1,x2,y1,y2,d,aux1,aux2;
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	
	aux1 = (x2 - x1) * (x2 - x1);
    aux2 = (y2 - y1) * (y2 - y1);
	
	d = sqrt(aux1+aux2);
	
	printf("%.4f\n",d);
	return 0;
}
