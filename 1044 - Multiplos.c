#include <stdio.h>
 
int main() {
    
    int a, b, i, x= 0;
    scanf("%d %d", &a, &b);
    if(a<b){
        do{
           x = a*i;
           i++;
           } while (x<b);
        if(x==b){
            printf("Sao Multiplos\n");
          }
        else{
            printf("Nao sao Multiplos\n");
        }
    }
    else{
        do{
           x = b*i;
           i++;
           } while (x<a);
        if(x==a){
            printf("Sao Multiplos\n");
          }
        else{
            printf("Nao sao Multiplos\n");
        }
    }
    
    return 0;
}