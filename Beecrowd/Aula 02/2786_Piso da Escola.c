#include <stdio.h>

int main(){
	int larg,comp,qnt1,qnt2;
	scanf ("%d\n%d",&larg,&comp);
	
	qnt1 = (comp*larg)+(comp-1)*(larg-1);
	qnt2 = ((comp-1)+(larg-1))*2;
	
	printf("%d\n%d\n",qnt1,qnt2);
	return 0;
}
