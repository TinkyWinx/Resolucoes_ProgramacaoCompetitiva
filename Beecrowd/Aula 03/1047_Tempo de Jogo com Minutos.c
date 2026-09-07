#include <stdio.h>

int main(){
	int hi,hf,mi,mf,inicio,final,duracao,horas,min,aux;
	
	scanf ("%d%d%d%d", &hi, &mi, &hf, &mf);
	
	inicio = (hi*60) + mi;
	final = (hf*60) + mf;
	
	if (inicio > final){
		duracao = (final+1440) - inicio;
	} else if (inicio == final){
		duracao = (inicio + 1440) - final;
	} else {
		duracao = final - inicio;
	}
	
		horas = duracao/60;
		min = duracao%60;
	
		
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, min);

	return 0;
}
