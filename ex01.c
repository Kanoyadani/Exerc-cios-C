#include <stdio.h>
int main() {	 
	
	int i,N1,N2,aprovado,reprovado,exame;
	float M;
	aprovado = 0;
	reprovado = 0;
	exame =0;
	i=1;
	
	do{
		printf("Qual o Resuldado da PRIMEIRA Nota? \n");
	scanf("%d" ,&N1);
	
	printf("Qual o Resuldado da SEGUNDA Nota? \n");
	scanf("%d" ,&N2);

	M = (N1 + N2)/2;
	
	printf("Sua Media foi %f.\n", M);
	

if(M>5){
	printf("Aprovado \n");
	aprovado++;
}else if(M < 3){
	printf("Reprovado \n");
	reprovado++;
}else if(M <= 5 && M >= 3){
	printf("Exame\n");
	exame++;
}

i++;
		
}while(i<=60);
		
printf("Alunos Aprovados %d\n",aprovado);
printf("Alunos Reprovados %d\n",reprovado);
printf("Alunos para o Exame %d\n",exame);		
	return 0;
}


//for (i=1;i<=60;i++){
//		printf("Qual o Resuldado da PRIMEIRA Nota? \n");
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
//if(M>=5){
//	printf("Aprovado \n");
//}else if(M <= 3){
//	printf("Reprovado \n");
//}else if(M < 5 && M > 3){
//	printf("Exame\n");
//}
//printf("Alunos Aprovados %d\n",aprovado);
//printf("Alunos Reprovados %d\n",reprovado);
//printf("Alunos para o Exame %d\n",exame);			
//	
//	
//}


//	while(i<60){
//			printf("Qual o Resuldado da PRIMEIRA Nota? \n");
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
//if(M>5){
//	printf("Aprovado \n");
//	aprovado++;
//}else if(M < 3){
//	printf("Reprovado \n");
//	reprovado++;
//}else if(M <= 5 && M >= 3){
//	printf("Exame\n");
//	exame++;
//}
//
//i++;
//
//	}
//printf("Alunos Aprovados %d\n",aprovado);
//printf("Alunos Reprovados %d\n",reprovado);
//printf("Alunos para o Exame %d\n",exame);



	
