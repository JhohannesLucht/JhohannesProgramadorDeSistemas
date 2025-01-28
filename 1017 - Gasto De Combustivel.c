#include <stdio.h>
 
int main() {
 
    int horas = 0;
    int kmh = 0;
    float litros = 0.0;
    
    scanf("%d\n%d",&horas,&kmh);
    litros = (horas*kmh)/12.0;
    printf("%.3f\n",litros);
 
    return 0;
}