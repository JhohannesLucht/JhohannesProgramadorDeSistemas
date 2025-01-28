#include <stdio.h>
 
int main() {
 
    double um, dois, tres, quatro, cinco, seis = 0.0;
    int qnt = 0;
    scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf", &um, &dois, &tres, &quatro, &cinco, &seis);
    if(um>0){
        qnt=qnt+1;
    }
    if(dois>0){
        qnt=qnt+1;
    }
    if(tres>0){
        qnt=qnt+1;
    }
    if(quatro>0){
        qnt=qnt+1;
    }
    if(cinco>0){
        qnt=qnt+1;
    }
    if(seis>0){
        qnt=qnt+1;
    }
    printf("%d valores positivos\n", qnt);
 
    return 0;
}