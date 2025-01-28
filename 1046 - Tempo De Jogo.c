#include <stdio.h>
 
int main() {

    int i, f, t = 0;
    scanf("%d %d", &i, &f);
    if(i<f){
        t = f-i;
        printf("O JOGO DUROU %d HORA(S)\n", t);
    }
    else if(i>f){
        i = 24-i;
        t = i+f;
        printf("O JOGO DUROU %d HORA(S)\n", t);
    }
    else{
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    
    return 0;
}