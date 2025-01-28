#include <stdio.h>
 
int main() {
 
    int hi, mi, hf, mf, th, tm = 0;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    if(((hi<=hf)&&(mi<mf))||(hi<hf)&&(mi<=mf)){
        th = hf-hi;
        tm = mf-mi;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", th, tm);
    }
    else if((hi<hf)&&(mi>mf)){
        th = hf-hi-1;
        mi = 60-mi;
        tm = mi+mf;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", th, tm);
    }
    else if((hi>=hf)&&(mi<mf)||(hi>hf)&&(mi<=mf)){
        hi = 24-hi;
        th = hi+hf;
        tm = mf-mi;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", th, tm);
    }
    else if((hi>=hf)&&(mi>mf)){
        hi = 24-hi;
        th = hi+hf-1;
        mi = 60-mi;
        tm = mi+mf;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", th, tm);
    }
    else{
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
 
    return 0;
}