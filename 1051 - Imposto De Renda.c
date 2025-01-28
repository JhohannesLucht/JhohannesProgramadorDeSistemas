#include <stdio.h>
 
int main() {
 
    double rs = 0.0;
    scanf("%lf", &rs);
    if(rs<=2000){
        printf("Isento\n");
    }
    else if((rs>2000) && (rs<=3000)){
        rs = rs-2000;
        rs = rs*0.08;
        printf("R$ %.2lf\n", rs);
    }
    else if((rs>3000) && (rs<=4500)){
        rs = rs-3000;
        rs = rs*0.18;
        rs = rs+80;
        printf("R$ %.2lf\n", rs);
    }
    else{
        rs = rs-4500;
        rs = rs*0.28;
        rs = rs+350;
        printf("R$ %.2lf\n", rs);
    }
    
    return 0;
}