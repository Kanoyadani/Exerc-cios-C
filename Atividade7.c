#include <stdio.h>
#include <locale.h>
#include <string.h>


//Principal
 int main(){
	int menu;		
 	int codfunc[20],salario[20];
	char nome[20][50],cargo[20][50];
	
	menu = 0;
	
	
	
	
while(menu != 1){
	
	printf("Cadastre os funcionarios\n");
	scanf("%d",&menu);	
	}
	
switch(menu){
	case 1:
		int i;	
		for(i =0; i < 2;i++){
		printf("Qual o nome do Funcionario\n");
		scanf("%s",&nome[i]);
		
		printf("Qual o cargo do Funcionario\n");
		scanf("%s",&cargo[i]);
		
		printf("Qual o salario do Funcionario\n");
		scanf("%d",&salario[i]);
		
		printf("Qual o codig do Funcionario\n");
		scanf("%d",&codfunc[i]);
		break
}
	case 2:
			int i;
			for(i =0; i < 2;i++){
			printf("***********************************************************")
			printf("*   O nome do Funcionario %d eh %s\                       *",codfunc[i],nome[i]);
			printf("***********************************************************")
		}
		break 
		
	case 3:	
			int i;
			for(i =0; i < 2;i++){
				if(salario[i] > 2000){
					printf("O funcionario %d tem o salario de %d",codfunc[i],salario[i]);
				}
		
}
			break
	
	case 4:
		for(i = 1; i <= 20; i++){
    s_total = salario[i] + s_total;
    printf("%d",s_total);
}	break

	case 5: 
	  int salario,i;
	  salario = 0;

		for(i = 1; i <= 20; i++){
    	if(salario[i] > maior){
        maior = salario[i];
    }
}
	break
	
	case 6:
		
		
	return 0;	
}
	

