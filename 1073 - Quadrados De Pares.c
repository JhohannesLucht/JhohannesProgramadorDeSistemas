#include <stdio.h>
 
int main() {
 
    int n, i, res = 0;
    scanf("%d", &n);
    for(i=2; i<=n; i++){
        if(i%2==0){
            res = i*i;
            printf("%d^2 = %d\n", i, res);
        }
    }
 
    return 0;
}