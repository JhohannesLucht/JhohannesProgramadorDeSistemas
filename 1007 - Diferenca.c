#include <stdio.h>
 
int main() {
 
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int diferenca = 0;
    
    scanf("%d\n%d\n%d\n%d",&A,&B,&C,&D);
    diferenca = (A*B - C*D);
    printf("DIFERENCA = %d\n",diferenca);
 
    return 0;
}