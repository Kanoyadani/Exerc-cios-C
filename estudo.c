#include <stdio.h>
#include <locale.h>



main (){
	int n,i;
	int vet1[99],vet2[99],vet3[99];

	
	printf("Qual o numero de elmenteos dos vetores?\n");
	scanf("%d",&n);
while(n < 0 || n > 99){
	printf("valor invalido");
	printf("Digite um novo valor");
	scanf("%d",&n);
}

    n = n-1;
for(i = 0;i <= n;i++){
	printf("digite o valor do primeiro vetor\n");
	scanf("%d",&vet1[i]);
}


for( i = 0;i <= n;i++){
	printf("digite o valor do Segundo vetro\n");
	scanf("%d",&vet2[i]);
}

for(i = 0; i <= n;i++){
	vet3[i] = 2 * vet1[i] - 3 * vet2[i];
}

for(i = 0; i<= n; i++){
	printf("%d",vet3[i]);
}

	
return 0;
}

