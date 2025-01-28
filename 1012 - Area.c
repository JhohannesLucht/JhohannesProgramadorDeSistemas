#include <stdio.h>
 
int main() {
 
   double A = 0.0;
   double B = 0.0;
   double C = 0.0;
   double triangulo = 0.0;
   double circulo = 0.0;
   double trapezio = 0.0;
   double quadrado = 0.0;
   double retangulo = 0.0;
   
   scanf("%lf %lf %lf",&A,&B,&C);
   triangulo = (A*C)/2;
   circulo = 3.14159*C*C;
   trapezio = (A+B)*C/2;
   quadrado = B*B;
   retangulo = A*B;
   printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangulo,circulo,trapezio,quadrado,retangulo);
 
    return 0;
}