#include <stdio.h>
#include <locale.h>

int main(){
int i, cont1, cont2, vetor1[9], vetor2[9], vetorResultante[19];

	for(i = 0; i < 10; i++){
		
		printf("Digite os valores do Vetor 1\n");
		scanf("%d", &vetor1[i]);
		
		printf("Digite os valores do Vetor 2\n");
		scanf("%d", &vetor2[i]);
	}
	
	cont1 = 0;
	cont2 = 0;
	
	for(i = 0; i < 20; i++){
		
		if(i % 2 == 0){
			vetorResultante[i] = vetor2[cont2];
			cont2++;
		}else{
			vetorResultante[i] = vetor1[cont1];
			cont1++;
		}
	}
	
	for(i = 0; i < 20; i++){
		printf(" %d ", vetorResultante[i]);
	}
	
	return 0 ;
	
	
}

