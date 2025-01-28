#include <stdio.h>
 
int main() {
 
    int u, d, t, q, c, qnt = 0;
    scanf("%d\n%d\n%d\n%d\n%d", &u, &d, &t, &q, &c);
    if(u%2==0){
        qnt = qnt+1;
    }
    if(d%2==0){
        qnt = qnt+1;
    }
    if(t%2==0){
        qnt = qnt+1;
    }
    if(q%2==0){
        qnt = qnt+1;
    }
    if(c%2==0){
        qnt = qnt+1;
    }
    printf("%d valores pares\n", qnt);
 
    return 0;
}