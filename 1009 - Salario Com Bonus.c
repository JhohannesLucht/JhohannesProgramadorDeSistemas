#include <stdio.h>
 
int main() {
 
    char nome[100];
    double salariofixo = 0.0;
    double total = 0.0;
    double vendas = 0.0;
    
    scanf("%s\n",nome);
    scanf("%lf\n%lf",&salariofixo,&vendas);
    total = salariofixo+(vendas*0.15);
    printf("TOTAL = R$ %.2lf\n",total);
 
    return 0;
}