#include <stdio.h>
 
int main() {
 
    char osso[15];
    char tipo[15];
    char comida[15];
    scanf("%s\n%s\n%s", osso, tipo, comida);
    if(osso[0] == 'v'){
        if(tipo[0] == 'a'){
            if(comida[0] == 'c'){
            printf("aguia\n");    
            }
            else{
                printf("pomba\n");
            }
        }
        else{
            if(comida[0] == 'o'){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
    }
    else{
        if(tipo[0] == 'i'){
            if(comida[2] == 'm'){
            printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            if(comida[0] == 'h'){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }
    
 
    return 0;
}