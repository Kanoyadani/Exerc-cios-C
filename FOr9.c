#include <stdio.h>
int main(){
	float i,at,media, attotal;
	i=1;
	attotal = 0;
	
	do{
		printf("Qual a altura?");
		scanf("%f",&at);
		attotal = attotal+at;
		i++;
	}while(i<=5);
			media = attotal/(i-1);
		printf("A media eh %f",media);
	
	return 0 ;
}


//	for(i=1;i<=5;i++){
//		printf("Qual a altura?");
//		scanf("%f",&at);
//		attotal = attotal+at;
//		i++;
//		
//	}
//			media = attotal/(i-1);
//		printf("A media eh %f",media);


//while(i<=5){
//		printf("Qual a altura?");
//		printf("Qual a altura?");
//		scanf("%f",&at);
//		attotal = attotal+at;
//		i++;
//}
//    			media = attotal/(i-1);
		printf("A media eh %f",media);
//



