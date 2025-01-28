#include <stdio.h>
 
int main() {
    
    double A, B, C = 0.0;
    double resultadoUm, resultadoDois = 0.0;
    double delta,chute = 0.0;

    scanf("%lf %lf %lf", &A, &B, &C);
    delta = (B*B)-(4*A*C);
    chute = delta;
    if((delta>=0) && ((2*A)!=0))
    {
         while(((delta*delta)-chute)>0.000001)
        {
            delta=0.5*(delta+(chute/delta));
        }
        resultadoUm = (-B + delta)/(2*A);
        resultadoDois = (-B - delta)/(2*A);
        printf("R1 = %.5lf\nR2 = %.5lf\n", resultadoUm, resultadoDois);
    }
    else 
    {
        printf("Impossivel calcular\n");
    }
 
    return 0;
}