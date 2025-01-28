#include <stdio.h>
 
int main() {
 
    int x, i = 0;
    scanf("%d", &x);
    for(i=1; i<=x; i++){
        printf("%d\n", i);
        i++;
    }
 
    return 0;
}