#include <stdio.h>

int main(){
	int i,N1,N2;
	float MT,total,M;
	MT = 0;
	i = 1;
	
	do{
	printf("Qual o Resuldado da PRIMEIRA Nota? \n");
	scanf("%d" ,&N1);
	
	printf("Qual o Resuldado da SEGUNDA Nota? \n");
	scanf("%d" ,&N2);

	M = (N1 + N2)/2;
	
	printf("Sua Media foi %f.\n", M);
	
	  
	MT = MT + M;
		
	
	i++;
	}while (i<=10);
	
	total = MT/(i-1);
	printf("A media Total eh %f\n",total);
	return 0;
}



//	for (i = 1; i<=10;i++){
//	printf("Qual o Resuldado da PRIMEIRA Nota? \n");
//	scanf("%d" ,&N1);
//	
//	printf("Qual o Resuldado da SEGUNDA Nota? \n");
//	scanf("%d" ,&N2);
//
//	M = (N1 + N2)/2;
//	
//	printf("Sua Media foi %f.\n", M);
//	
//	  
//	MT = MT + M;
//		
//	total = MT/(i-1);
//	printf("A media Total eh %f\n",total);
//	}
//	

//	while (i<=2){
//	printf("Qual o Resuldado da PRIMEIRA Nota? \n");
//	scanf("%d" ,&N1);
//	
//	printf("Qual o Resuldado da SEGUNDA Nota? \n");
//	scanf("%d" ,&N2);
//
//	M = (N1 + N2)/2;
//	
//	printf("Sua Media foi %f.\n", M);
//	
//	  
//	MT = MT + M;
//		
//	total = MT/(i-1);
//	printf("A media Total eh %f\n",total);
//	i++;
//	}
//	
