#include <stdio.h>
 
int main() {
 
    int c = 0; int coluna = 0; int linha = 0;
    char t;
    double matriz[12][12];
    double soma = 0.0;
    scanf("%d\n%c\n", &c, &t);
    for(linha = 0; linha < 12; linha++){
        for(coluna = 0; coluna < 12; coluna++){
            scanf("%lf", &matriz[linha][coluna]);
        }
    }
    if(t == 'S'){
        for(linha = 0; linha < 12; linha++){
            soma = soma + matriz[linha][c];
        }
        printf("%.1lf\n", soma);
    }
    else{
        for(linha = 0; linha < 12; linha++){
            soma = soma + matriz[linha][c];
        }
        soma = soma/12;
        printf("%.1lf\n", soma);
    }
 
    return 0;
}