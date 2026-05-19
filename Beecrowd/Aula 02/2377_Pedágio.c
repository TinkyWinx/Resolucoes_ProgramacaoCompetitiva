#include <stdio.h>

int main(){
	int kmp,dp,ckm,cp,aux1,aux2,aux3,custototal;
	scanf ("%d%d%d%d",&kmp,&dp,&ckm,&cp);
	
	aux1 = kmp/dp;
	aux2 = cp*aux1;
	aux3 = ckm*kmp;
	
	custototal = aux2+aux3;
	
	printf("%d\n",custototal);
	return 0;
}
