#include <stdio.h>
 
int main() {
 
    int x[9999];
    int n, in, out,  i = 0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
        if((x[i]>=10)&&(x[i]<=20)){
            in = in+1;
        }
        else{
            out = out+1;
        }
    }
    printf("%d in\n%d out\n", in, out);
 
    return 0;
}