#include <stdio.h>
 
int main() {
    
    double n = 3.14159;
    double raio = 0;
    double area = 0;
    scanf("%lf",&raio,&area);
    area = n*raio*raio;
    printf("A=%.4lf\n",area);
    
    return 0;
}