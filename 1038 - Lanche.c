#include <stdio.h>
 
int main() {
 
    int cod, qnt = 0;
    double total, valor = 0.0;
    scanf("%d %d", &cod, &qnt);
    if(cod==1){
        valor = 4.00;
    }
    else if(cod==2){
        valor = 4.50;
    }
    else if(cod==3){
        valor = 5.00;
    }
    else if(cod==4){
        valor = 2.00;
    }
    else{
        valor = 1.50;
    }
    total = valor*qnt;
    printf("Total: R$ %.2lf\n", total);
    
    return 0;
}