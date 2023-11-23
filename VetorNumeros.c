#include <stdio.h>
#include <locale.h>
//Função
void cadastro(int a[5],int b[5]){
	int i;
	
	printf("Cadastrando do numero\n");
	for(i = 0;i < 5 ; i++){

		
	printf("Digite o numero\n");
 	 scanf("%d",&a[i]);
 	
	
 	 
 	  
 	 b[i] = a[i] * a[i]; 
	}

	}
	
	


void exibe(int a[5],int b[5]){
		int i;
		
	printf("Exiba o numero\n");
	for(i = 0;i < 5 ; i++){
		
		
			printf("O [%d] tem quadrado de  %d\n",a[i],b[i]);
		
		
		
	
}


}


//Principal
 int main(){

 	
 	int a[5],b[5];
 	cadastro(a,b);
 	exibe(a,b);
};
