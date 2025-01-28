#include <stdio.h>
 
int main() {
 
    double u, d, t, q, c, s, media = 0.0;
    int qnt = 0;
    scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf", &u, &d, &t, &q, &c, &s);
    if(u>0){
        qnt = qnt+1;
        media = media+u;
    }
    if(d>0){
        qnt = qnt+1;
        media = media+d;
    }
    if(t>0){
        qnt = qnt+1;
        media = media+t;
    }
    if(q>0){
        qnt = qnt+1;
        media = media+q;
    }
    if(c>0){
        qnt = qnt+1;
        media = media+c;
    }
    if(s>0){
        qnt = qnt+1;
        media = media+s;
    }
    media = media/qnt;
    printf("%d valores positivos\n%.1lf\n", qnt, media);
 
    return 0;
}