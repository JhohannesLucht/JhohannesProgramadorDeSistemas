#include <stdio.h>
 
int main() {
 
    int N = 0;
    int cem = 0;
    int cinquenta = 0;
    int vinte = 0;
    int dez = 0;
    int cinco = 0;
    int dois = 0;
    int um = 0;
    
    scanf("%d",&N);
    cem = N/100;
    cinquenta = (N-(cem*100))/50;
    vinte = (N-(cem*100+cinquenta*50))/20;
    dez = (N-(cem*100+cinquenta*50+vinte*20))/10;
    cinco = (N-(cem*100+cinquenta*50+vinte*20+dez*10))/5;
    dois = (N-(cem*100+cinquenta*50+vinte*20+dez*10+cinco*5))/2;
    um = (N-(cem*100+cinquenta*50+vinte*20+dez*10+cinco*5+dois*2))/1;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",N,cem,cinquenta,vinte,dez,cinco,dois,um);
 
    return 0;
}