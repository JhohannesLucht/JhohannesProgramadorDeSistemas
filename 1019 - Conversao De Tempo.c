#include <stdio.h>
 
int main() {
 
    int N = 0;
    int horas = 0;
    int minutos = 0;
    int segundos = 0;
    int resto = 0;
    
    scanf("%d",&N);
    horas = N/3600;
    resto = N%3600;
    minutos = resto/60;
    resto = resto%60;
    segundos = resto;
    printf("%d:%d:%d\n",horas,minutos,segundos);
 
    return 0;
}