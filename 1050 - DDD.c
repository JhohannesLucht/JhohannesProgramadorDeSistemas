#include <stdio.h>
 
 typedef enum{
     br = 61,
     sa = 71,
     sp = 11,
     rj = 21,
     jf = 32,
     ca = 19,
     vi = 27,
     bh = 31
 }ddd;
 
int main() {
    
    int dd = 0;
    ddd teste;
    scanf("%d", &dd);
    teste = (ddd)dd;
    switch(teste){
        case 61:
        printf("Brasilia\n");
        break;
        case 71:
        printf("Salvador\n");
        break;
        case 11:
        printf("Sao Paulo\n");
        break;
        case 21:
        printf("Rio de Janeiro\n");
        break;
        case 32:
        printf("Juiz de Fora\n");
        break;
        case 19:
        printf("Campinas\n");
        break;
        case 27:
        printf("Vitoria\n");
        break;
        case 31:
        printf("Belo Horizonte\n");
        break;
        default:
        printf("DDD nao cadastrado\n");
    }
 
    return 0;
}