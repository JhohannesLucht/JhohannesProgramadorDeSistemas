#include <stdio.h>
 
int main() {
 
   int di, hi, mi, si, df, hf, mf, sf, td, th, tm, ts = 0;
    scanf("Dia %d\n", &di);
    scanf("%d : %d : %d", &hi, &mi, &si);
    getchar();
    scanf("Dia %d\n", &df);
    scanf("%d : %d : %d", &hf, &mf, &sf);
    
    if(si<=sf){
        ts = sf - si;
    }
    else{
        si = 60 - si;
        ts = si + sf;
        mf = mf - 1;
    }
    if(mi<=mf){
        tm = mf - mi;
    }
    else{
        mi = 60 - mi;
        tm = mi + mf;
        hf = hf - 1;
    }
    if(hi<=hf){
        td = df - di;
        th = hf - hi;
    }
    else{
        td = df-di-1;
        hi = 24-hi;
        th = hi+hf;
    }
    
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", td, th, tm, ts);
    
    return 0;
}