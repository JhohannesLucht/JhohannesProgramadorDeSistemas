#include <stdio.h>
 
int main() {
 
    int km = 0;
    float combustivel = 0.0;
    float kml = 0.0;
    
    scanf("%d\n%f",&km,&combustivel);
    kml = km/combustivel;
    printf("%.3f km/l\n",kml);
 
    return 0;
}