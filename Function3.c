#include <stdio.h>
#include <locale.h>
//Função
int soma(int a, int b){
	int r,i, result;
	r = 0;
	while(a < b){
		result = a; 		
		
		r = r + result;
		a++;
	}
	
	return r;
}

//Principal
 int main(){
 	int r,x,y;
 	 printf("Qual o valor de X");
 	 scanf("%d",&x);
 	
  	 printf("Qual o valor de Y");
 	 scanf("%d",&y);	
 	 
	  
	   	
	r = soma(x,y);
	printf("%d",r);
	return 0;
}
