#include <stdio.h>
#include <locale.h>
//Função
int cadastro(int maior[],int n){
	int i;
	int x,y,total;
	y = maior[0];
	printf("Qual o valor do item?\n");
	for(i = 0;i < n ; i++){
	
		
	printf("Valor?\n");
 	 scanf("%d",&maior[i]);
 	 	  
 	if(maior[i] > y){
 		y = maior[i];
	 }
 	
	}
	 total = y;
		return total;		  
	}
	
	


void exibe(int y){
		
		
	printf("Exiba o maior valor \n");

		
		
			printf("O maior valor eh %d\n",y);
		
		
		
	



}


//Principal
 int main(){
 	int n,y;
 	printf("Quantos elemntos deseja guardar no vetor?\n");
 	scanf("%d",&n);
 	
 	int maior[n];
 	y = cadastro(maior,n);
 	exibe(y);
};
