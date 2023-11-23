#include <stdio.h>
#include <locale.h>
#include <string.h>
//Função
void cadastro(char nome[][15],int idade[], int p){
	int i;

	printf("Cadastrando Nome e idade\n");
	for(i = 0;i < p ; i++){

		
	printf("Digite seu nome\n");
 	 scanf("%s",&nome[i]);
 	
	printf("Digite sua idade\n");
 	 scanf("%d",&idade[i]);
 	 
 	  

	}
		
	}
	
	


void exibe(char nome[][15],int idade[],int p){
		int i;
		char esp[15];
		printf("Digite o nome que deseja pesquisar.\n");
		scanf("%s",&esp);
		
	

	for(i = 0;i < p ; i++){
			if(strcmp(esp, nome[i]) == 0) {
				printf("Seu nome %s e sua idade eh  %d\n",nome[i],idade[i]);
		}

		
}


}


//Principal
 int main(){
	int p;
	 	printf("Quantos elemntos deseja guardar no vetor?\n");
 	scanf("%d",&p);
 	
 	char nome[p] [15];
	 int idade[p];
 	cadastro(nome,idade,p);
 	exibe(nome,idade,p);
};
