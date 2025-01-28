#include <stdio.h>
 
int main() {

    double x1,y1,x2,y2,raiz,chute = 0.0;
 
    scanf("%lf %lf\n%lf %lf",&x1,&y1,&x2,&y2);

    raiz = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    chute = raiz;
    while(((raiz*raiz)-chute) > 0.00001)
    {
        raiz = 0.5*(raiz+(chute/raiz));
        
    }
 
    printf("%.4lf\n", raiz);
 
    return 0;
}