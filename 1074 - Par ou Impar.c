#include <stdio.h>
 
int main() {
    
    int numeros[9999];
    int n = 0; int i = 0;
    scanf("%d\n",&n);
    for(i = 0; i < n; i++){
        scanf("%d", &numeros[i]);
    }
    for(i = 0; i < n; i++){
        if(numeros[i]%2==0){
            if(numeros[i]>0){
                printf("EVEN POSITIVE\n");
            }
            else if(numeros[i]<0){
                printf("EVEN NEGATIVE\n");
            }
            else {
                printf("NULL\n");
            }
        }
        else{
            if(numeros[i]>0){
                printf("ODD POSITIVE\n");
            }
            else if(numeros[i]<0){
                printf("ODD NEGATIVE\n");
            }
            else {
                printf("NULL\n");
            }
        }
    }
    
 
    return 0;
}