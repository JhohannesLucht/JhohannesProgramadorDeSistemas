#include <stdio.h>
 
int main() {
    double A = 0.0;
    scanf("%lf", &A);
    if(A<0 || A>100){
         printf("Fora de intervalo\n");   
    }
    else if(A>=0 && A<=25){
         printf("Intervalo [0,25]\n");
    }
    else if(A>25 && A<=50){
         printf("Intervalo (25,50]\n");
    }
    else if(A>50 && A<=75){
         printf("Intervalo (50,75]\n");
    }
    else{
         printf("Intervalo (75,100]\n");
    }
    return 0;
}