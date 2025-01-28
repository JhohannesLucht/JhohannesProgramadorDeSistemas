#include <stdio.h>
 
int main() {
 
    int vetor[5];
    int i, pares = 0, impares = 0, posi = 0, neg = 0;
    for(i=0; i<5; i++){
		scanf("%d\n",&vetor[i]);
		if(vetor[i]%2!=0){
			impares++;
		}else {
			pares++;
		}
		if(vetor[i]>0){
			posi++;
		}else if(vetor[i]<0){
			neg++;
		}
	}
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", pares, impares, posi, neg);
 
    return 0;
}