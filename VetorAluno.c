#include <stdio.h>
#include <locale.h>
//Função
void cadastro(int media[],int n){
	int i;
	int x,y;
	printf("Cadastrando notas dos alunos\n");
	for(i = 0;i < n ; i++){

		
	printf("Qual a Nota 1\n");
 	 scanf("%d",&x);
 	
  	 printf("Qual a Nota 2\n");
 	 scanf("%d",&y);
 	 
 	  
 	 media [i] = (x + y)/2; 
	}

	}
	
	


void exibe(int media[],int n){
		int i;
		
	printf("Exiba notas dos Alunos \n");
	for(i = 0;i < n ; i++){
		
		if(media[i] < 5){
			printf("O aluno[%d] tem a media %d\n",i,media[i]);
		}
		
		
	
}


}


//Principal
 int main(){
 	int n;
 	printf("Quantos elemntos deseja guardar no vetor?\n");
 	scanf("%d",&n);
 	
 	int media[n];
 	cadastro(media,n);
 	exibe(media,n);
};
