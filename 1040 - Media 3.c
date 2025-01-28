#include <stdio.h>
 
 #define PESO1 2.0
 #define PESO2  3.0
 #define PESO3  4.0
 #define PESO4  1.0
 
int main() {
 
    double n1, n2, n3, n4, media, exame = 0.0;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    media = ((n1*PESO1)+(n2*PESO2)+(n3*PESO3)+(n4*PESO4))/(PESO1+PESO2+PESO3+PESO4);
    printf("Media: %.1lf\n", media);
    if(media>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(media<5.0){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        media = (media+exame)/2;
        if(media>=5.0){
            printf("Aluno aprovado.\nMedia final: %.1lf\n", media);
        }
        else{
            printf("Aluno reprovado.\nMedia final: %.1lf\n", media);
        }
    }
 
    return 0;
}