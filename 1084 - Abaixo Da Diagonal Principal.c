#include <stdio.h>
 
int main() {
 
    char o;
    int l = 0; int c = 0;
    double matriz[12][12];
    double soma = 0.0;
    int coluna = 1;
    scanf("%c", &o);
    for(l = 0; l < 12; l++){
        for(c = 0; c < 12; c++){
            scanf("%lf", &matriz[l][c]);
        }
    }
    if(o == 'S'){
        for(l=1; l<12; l++){
            for(c=0; c < coluna; c++){
                soma = soma+matriz[l][c];
            }
            coluna++;
        }
        printf("%.1lf\n", soma);
    }
    else{
        for(l=1; l<12; l++){
            for(c=0; c < coluna; c++){
                soma = soma+matriz[l][c];
            }
            coluna++;
        }
        soma = soma/66;
        printf("%.1lf\n", soma);
    }
 
    return 0;
}