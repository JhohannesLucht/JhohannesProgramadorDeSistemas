#include <stdio.h>
 
int main() {
 
    int peca1 = 0;
    int npeca1 = 0;
    float vpeca1 = 0.0;
    int peca2 = 0;
    int npeca2 = 0;
    float vpeca2 = 0.0;
    float valor = 0;
    
    scanf("%d %d %f\n%d %d %f",&peca1,&npeca1,&vpeca1,&peca2,&npeca2,&vpeca2);
    valor = (npeca1*vpeca1)+(npeca2*vpeca2);
    printf("VALOR A PAGAR: R$ %.2f\n",valor);

    return 0;
}