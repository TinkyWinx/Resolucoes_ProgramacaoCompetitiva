#include <stdio.h>

int main(){
    long long comp,quant,tapetao,areatotal,maiorsoma;
    scanf ("%lld%lld",&comp,&quant);

    tapetao = (comp-quant+1);
    areatotal = tapetao * tapetao; 
    maiorsoma = areatotal + (quant-1);
    
    printf ("%lld\n",maiorsoma);
    return 0;
}
