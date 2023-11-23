#include <stdio.h>

int main(){
	int Nmr, escolha;
	do{
	srand(time(NULL));
	
	Nmr = rand()%2 +1;
	
	
	printf("Escolha um numero\n");
	scanf("%d",&escolha);
	
	
	
	
	}while(Nmr == escolha);
	
	if(Nmr == escolha){
		printf("Voce acertou!");
	};
	

	
	
	
	
	
	return 0;
}
