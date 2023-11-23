#include <stdio.h>
#include <locale.h>
#include <string.h>
//Função
void cadastro(int vetora[3]){
	int i;
	printf("Inclua os valores\n");
	
	for(i = 0;i < 3 ; i++){
 	printf("Digite seu o valor do vetor 1\n");
  	 scanf("%d",&vetora[i]);
  	
 	
 	 
 	 

}
		
		
	
	
 
			
	
				
}
	
	


void exibe(int vetora[3],int vetorb[3]){
		int i;
		int vr[6];
	

	for(i = 0;i < 3; i++){
			vr[i] = vetora[i];
			

		vr[i+3] = vetorb[i];
			
	}

	for(i = 0;i < 6 ; i++){
			printf("Exibindo %d\n",vr[i]);
		}


}





//Principal
 int main(){
	int r;		
 	int vetora[3],vetorb[3];
 	cadastro(vetora);
 	cadastro(vetorb);
 	exibe(vetora,vetorb);
};
