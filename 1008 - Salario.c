#include <stdio.h>
 
int main() {
 
    int numero = 0;
    int horas = 0;
    float valor = 0;
    float salario = 0;
    
    scanf("%d\n%d\n%f",&numero,&horas,&valor);
    salario = horas*valor;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",numero,salario);
    
    return 0;
}