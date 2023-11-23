#include <stdio.h>

int main (){
	
	int i, N1, N2, M;
	i = 1;
do{
printf("Qual o Resuldado da PRIMEIRA Nota? \n");
	scanf("%d" ,&N1);
	
	printf("Qual o Resuldado da SEGUNDA Nota? \n");
	scanf("%d" ,&N2);

	M = (N1 + N2)/2;
	
	if (M >= 5){
		printf("APROVADO! \n");
	}else{
		printf("REPROVADO! \n");
	}
	
	printf("Sua Media foi %d.", M);
	i++;
	
	
	
}while(i<=10);


	return 0;
}


//	for( ; i<= 10; i1
//	++ ){
//	
//	
//	
//	printf("Qual o Resuldado da PRIMEIRA Nota? \n");
//	scanf("%d" ,&N1);
//	
//	printf("Qual o Resuldado da SEGUNDA Nota? \n");
//	scanf("%d" ,&N2);
//
//	M = (N1 + N2)/2;
//	
//	if (M >= 5){
//		printf("APROVADO! \n");
//	}else{
//		printf("REPROVADO! \n");
//	}
//	
//	printf("Sua Media foi %d.", M);
//}


//	while( i<= 10){
//	
//	
//	
//	printf("Qual o Resuldado da PRIMEIRA Nota? \n");
//	scanf("%d" ,&N1);
//	
//	printf("Qual o Resuldado da SEGUNDA Nota? \n");
//	scanf("%d" ,&N2);
//
//	M = (N1 + N2)/2;
//	
//	if (M >= 5){
//		printf("APROVADO! \n");
//	}else{
//		printf("REPROVADO! \n");
//	}
//	
//	printf("Sua Media foi %d.", M);
//	i++;
//	
//}
	
	
	
	
	

