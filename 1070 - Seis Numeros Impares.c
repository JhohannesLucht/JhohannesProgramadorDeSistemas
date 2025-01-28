#include <stdio.h>
 
int main() {
    
    int x, i = 0;
    scanf("%d", &x);
    if(x%2==0){
        for(i=(x+1); i<=(x+11); i++){
            printf("%d\n", i);
            i++;
        }
    }
    else {
         for(i=x; i<=(x+10); i++){
            printf("%d\n", i);
            i++;
        }
    }
    return 0;
}