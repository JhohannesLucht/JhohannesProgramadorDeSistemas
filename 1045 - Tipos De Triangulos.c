#include <stdio.h>
 
int main() {
    
    double A, B, C, xa = 0.0;
    scanf("%lf %lf %lf", &A, &B, &C);
    if((A<=B && A<C && B<=C)||(B<A && B<C && A<C)){ 
        xa = A;
        A = C;
        C = xa;
    }
    else if((A<B && A<=C && B>C)||(C<=A && C<B && A<B)){ 
        xa = A;
        A = B;
        B = xa;
    }
    if(A>=(B+C)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((A*A)==((B*B)+(C*C))){
        printf("TRIANGULO RETANGULO\n");
    }
    else if((A*A)>((B*B)+(C*C))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if((A*A)<((B*B)+(C*C))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A==B && A==C){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((A==B && A!=C)||(A==C && A!=B)||(B==C && B!=A)){
        printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}