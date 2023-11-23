#include <stdio.h>
#include <locale.h>
#include <string.h>
//Função
void cadastro(int vetora[],int vetorb []){
	int i,ipar,iimpar;
	int vt,somapar,somaimpar;
	float mediapar,mediaimpar;
	ipar =0;
	iimpar =0;
	somapar=0;
	somaimpar=0;
	printf("Inclua os valores\n");
	
	for(i = 0;i < 99 ; i++){
 	printf("Digite seu o valor do vetor 1\n");
  	 scanf("%d",&vt);
  	
 	if (vt % 2 == 0){
 		vetora[i] = vt;
 		ipar = ipar + 1;
 		somapar = somapar + vetora[i];
	 }else{
	 	vetorb[i] = vt;
	 	iimpar = iimpar + 1; 
	 	somaimpar = somaimpar + vetorb[i];
	 	
	 }
 	 

}
		
 	 mediapar = somapar/ipar;
 	 printf("%.2f\n",mediapar);
 	 mediaimpar = somaimpar/iimpar;
 	 printf("%.2f\n",mediaimpar);					
}
	
	







//Principal
 int main(){
			
 	int vetora[100],vetorb[100];
 	cadastro(vetora,vetorb);
 	
};
