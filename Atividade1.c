#include <stdio.h>
#include <locale.h>

int main(){
int n, i, vet1[100], vet2[100], vet3[100];

	printf("Qual o numero de elementos dos vetores?\n");
	scanf("%d", &n);

	while(n < 0 || n > 99){
		printf("Numero invalido\n");
		printf("Escreva um numero Valido\n");
		scanf("%d", &n);
	}
	
	n = n - 1;
	
	for(i = 0; i <= n; i++){
		printf("Digite os numeros do vetor 1\n");
		scanf("%d", &vet1[i]);
	}
	
	for(i = 0; i <= n; i++){
		printf("Digite os numeros do vetor 2\n");
		scanf("%d", &vet2[i]);
	}

	for(i = 0; i <= n; i++){
		vet3[i] = 2 * vet1[i] - 3 *	vet2[i];
	}
	
	for(i = 0; i <= n; i++){
		printf("Resuldado - %d\n", vet3[i]);
	}
	
	return 0 ;
	
}
