#include <stdio.h>
 
int main() {
 
    float N = 0.0;
    int resto = 0;
    int nota100 = 0;
    int nota50 = 0;
    int nota20 = 0;
    int nota10 = 0;
    int nota5 = 0;
    int nota2 = 0;
    int moeda100 = 0;
    int moeda50 = 0;
    int moeda25 = 0;
    int moeda10 = 0;
    int moeda5 = 0;
    int moeda1 = 0;
    scanf("%f",&N);
    N = N*100;
    nota100 = (int)N/10000;
    resto = (int)N%10000;
    nota50 = resto/5000;
    resto = resto%5000;
    nota20 = resto/2000;
    resto = resto%2000;
    nota10 = resto/1000;
    resto = resto%1000;
    nota5 = resto/500;
    resto = resto%500;
    nota2 = resto/200;
    resto = resto%200;
    moeda100 = resto/100;
    resto = resto%100;
    moeda50 = resto/50;
    resto = resto%50;
    moeda25 = resto/25;
    resto = resto%25;
    moeda10 = resto/10;
    resto = resto%10;
    moeda5 = resto/5;
    resto = resto%5;
    moeda1 = resto;
    
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",nota100,nota50,nota20,nota10,nota5,nota2,moeda100,moeda50,moeda25,moeda10,moeda5,moeda1);
 
    return 0;
}