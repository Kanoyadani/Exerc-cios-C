#include <stdio.h>
#include <locale.h>
//Função
void cadastro(float altura[5],float peso[5]){
	int i;

	printf("Cadastrando IMC dos alunos\n");
	for(i = 0;i < 5 ; i++){

		
	printf("Digite a altura\n");
 	 scanf("%f",&altura[i]);
 	
	printf("Digite o peso\n");
 	 scanf("%f",&peso[i]);
 	 
 	  

	}
		
	}
	
	


void exibe(float altura[5],float peso[5]){
		int i;
		float imc;
	
	printf("Exiba o IMC \n");
	for(i = 0;i < 5 ; i++){
		

		imc = peso [i] / (altura[i] * altura[i]);
 		printf("Seu IMC eh  %.2f\n",imc);	
	
}


}


//Principal
 int main(){

 	
 	float altura[5],peso[5];
 	cadastro(altura,peso);
 	exibe(altura,peso);
};
