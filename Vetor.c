#include <stdio.h>
#include <locale.h>
//Função
void cadastro(int vetor[],int n){
	int i;
	printf("Cadastrando elementos do cursor\n");
	for(i = 0;i < n ; i++){
		printf("Vetor[%d] = ",i);
		scanf("%d",&vetor[i]);
	}
	
	
}

int exibe(int vetor[],int n){
		int i;
	printf("Cadastrando elementos do cursor\n");
	for(i = 0;i < n ; i++){
		printf("Vetor[%d] = %d\n",i,vetor[i]);
		
	}
	
	
}





//Principal
 int main(){
 	int n;
 	printf("Quantos elemntos deseja guardar no vetor?\n");
 	scanf("%d",&n);
 	int x[n];
 	cadastro(x,n);
 	exibe(x,n);
}
