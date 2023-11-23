#include <stdio.h>
//Função
void maior(int x,int y){
	int r,op;


do{
		
			
		printf("**************************************\n");
		printf("** Escolha qual operação a ser feita**\n");
		printf("**            1- O soma             **\n");
		printf("**            2- O subtração        **\n");
		printf("**            3- O Mutiplicacao     **\n");
		printf("**            4- O Divisao          **\n");
		printf("**            0- Finalizar programa **\n");
		printf("**************************************\n");
		scanf("%d",&op);
		
		switch(op){
	case 1:
	 r = x + y ;
	printf("O valor eh %d\n",r);
 	 break;
	
	case 2:
	r = x - y ;
			printf("O valor eh %d\n",r);
	break;
	
	case 3:
	r = x * y;
			printf("O valor eh %d\n",r);
	break;
		
	case 4:
	 r = x / y;
		printf("O valor eh %d\n",r);
	break;		
 }	
	 	
}while(op != 0);
	
	
}

//Principal
 int main(){
 	int x,y;
		

		
	 printf("Qual o valor de X\n");
 	 scanf("%d",&x);
 	
  	 printf("Qual o valor de Y\n");
 	 scanf("%d",&y);
 	  	
	maior(x,y);

	return 0;
}
