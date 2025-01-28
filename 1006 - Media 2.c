#include <stdio.h>
 
 #define PESOA 2.0
 #define PESOB 3.0
 #define PESOC 5.0
 
int main() {
    
    double A = 0.0;
    double B = 0.0;
    double C = 0.0;
    double media = 0.0;
    
    scanf("%lf\n%lf\n%lf",&A,&B,&C);
    media = ((A*PESOA)+(B*PESOB)+(C*PESOC))/(PESOA+PESOB+PESOC);
    printf("MEDIA = %.1lf\n",media);
    
    return 0;
}