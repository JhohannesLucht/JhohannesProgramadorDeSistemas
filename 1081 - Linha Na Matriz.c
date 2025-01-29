#include <stdio.h>
 
int main() {
 
    int l = 0; int c = 0; int linha = 0;
    char t;
    double matriz[12][12];
    double soma = 0.0;
    scanf("%d\n%c\n", &l, &t);
    for(linha = 0; linha < 12; linha++){
        for(c = 0; c < 12; c++){
            scanf("%lf", &matriz[linha][c]);
        }
    }
    if(t == 'S'){
        for(c = 0; c < 12; c++){
            soma = soma + matriz[l][c];
        }
        printf("%.1lf\n", soma);
    }
    else{
        for(c = 0; c < 12; c++){
            soma = soma + matriz[l][c];
        }
        soma = soma/12;
        printf("%.1lf\n", soma);
    }
    
    
 
    return 0;
}