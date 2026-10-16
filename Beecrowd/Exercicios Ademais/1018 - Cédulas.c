#include <stdio.h>

int main (){
  int n, cem, c50, v20, d10, c5, d2, um;
  scanf("%d", &n);
  
  cem = n/100;
  c50 = (n%100)/50;
  v20 = ((n%100)%50)/20;
  d10 = (((n%100)%50)%20)/10;
  c5 = ((((n%100)%50)%20)%10)/5;
  d2 = (((((n%100)%50)%20)%10)%5)/2;
  um = ((((((n%100)%50)%20)%10)%5)%2)/1;
  
  printf ("%d\n", n);
  printf ("%d nota(s) de R$ 100,00\n", cem);
  printf ("%d nota(s) de R$ 50,00\n", c50);
  printf ("%d nota(s) de R$ 20,00\n", v20);
  printf ("%d nota(s) de R$ 10,00\n", d10);
  printf ("%d nota(s) de R$ 5,00\n", c5);
  printf ("%d nota(s) de R$ 2,00\n", d2);
  printf ("%d nota(s) de R$ 1,00\n", um);
  
  return 0;
}
