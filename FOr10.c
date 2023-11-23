#include <stdio.h>

int main(){
	int i,par;
i=1;
par =0;
do{
	if(i%2==0){
		printf("O numero %d eh par\n",i);
		par++;
		};
		i++;
}while(i<=30);
printf("Possui %d numeros pares",par);
	
	return 0;
	
}



//	for(i= 1;i<=30;i++){
//		if(i%2==0){
//			printf("O numero %d eh par\n",i);
//			par++
//		};
//		
//	};


//while(i<=30){
//		if(i%2==0){
//		printf("O numero %d eh par\n",i);
//		par++
//		};
//		i++;
