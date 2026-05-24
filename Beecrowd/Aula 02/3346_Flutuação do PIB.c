#include <stdio.h>

int main(){
	double f1,f2,ftotal;
	scanf ("%lf%lf",&f1,&f2);
	
	f1 = f1/100+1;
	f2 = f2/100+1;
	ftotal = (f1*f2)*100-100;
	
	printf("%.6lf\n", ftotal);
	return 0;
}
