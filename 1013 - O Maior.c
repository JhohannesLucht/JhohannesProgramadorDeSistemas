#include <stdio.h>
 
int main() {
 
    int a = 0;
    int b = 0;
    int c = 0;
    int maior = 0;
    int maiorfinal = 0;
    
    scanf("%d %d %d",&a,&b,&c);
    maior = (a+b+abs(a-b))/2;
    maiorfinal = (maior+c+abs(maior-c))/2;
    printf("%d eh o maior\n",maiorfinal);
 
    return 0;
}