#include <stdio.h> 

int main(){
	int i,nmr,sc,ac;
i
 = 1;
do{


	printf("Qual a Numero escolhido?\n");
	scanf("%d",&nmr);
	sc = nmr + 1;
	ac = nmr - 1 ;
	printf("O numero %d, tem como sucessor %d e antecessor %d \n",nmr,sc,ac);
	i++;
}while(i <= 5);

	
	return 0;	
 
}  

//for(i = 1; i<=5;i++){
//
//		printf("Qual a Numero escolhido?\n");
//	scanf("%d",&nmr);
//	sc = nmr + 1;
//	ac = nmr - 1 ;
//	printf("O numero %d, tem como sucessor %d e antecessor %d \n",nmr,sc,ac);
//}

//	
//	i
// = 1;
//
//while(i <= 5){
//
//
//	printf("Qual a Numero escolhido?\n");
//	scanf("%d",&nmr);
//	sc = nmr + 1;
//	ac = nmr - 1 ;
//	printf("O numero %d, tem como sucessor %d e antecessor %d \n",nmr,sc,ac);
//	i++;
//}
//	return 0;
//	
//	
 

