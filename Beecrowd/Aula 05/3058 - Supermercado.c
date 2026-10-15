#include <stdio.h>

int main(){
	double p, total, menor;
	int n, i, g; 
	scanf ("%d", &n);
	
	for(i = 0 ; i < n ; i++){
		scanf("%lf%d", &p, &g);
		total = (p/g) * 1000.0;
		
		if (i == 0 || total < menor){
			menor = total;
		}
	}
		printf("%.2lf\n", menor);
	return 0;
}
