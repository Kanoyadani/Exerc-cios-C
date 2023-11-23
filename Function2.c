#include <stdio.h>
//Função
int maior(){
	int r,numero,i;
	for( i = 0; i < 3;i++){
		printf("Digite um valor: \n");
		scanf("%d",&numero);
		
		if(r < numero){
			r = numero;
		}
	}
	

	return r;
}

//Principal
 int main(){
 	int r;

 	  	
	r = maior();
	printf("%d O maior numero eh",r);
	return 0;
}
