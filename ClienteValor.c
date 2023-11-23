#include <stdio.h>
#include <locale.h>

char formas(ValorInformado){
	char pagamento ;
printf("******************************\n");
printf("*     Forma de Pagamento     *\n");
printf("*     A - Debito             *\n");
printf("*     B - Credito            *\n");
printf("******************************\n");
	
scanf(" %c",&pagamento);

return pagamento;

}	



int main() {
 float ValorInformado;
 char pagamentos ;
 
 
 
 printf("Qual o valor da soma das compras do Cliente?\n");
 scanf("%f",&ValorInformado);
 
 pagamentos = formas(ValorInformado);
 
 
 
 switch (pagamentos){
	case 'A': ;
	 printf("O total da Compra é R$ %f",ValorInformado);
	 break;
		
	case 'B' : ;
		char parcelar;
		int QuantidadeDeParcelas;
		float ValorDaParcela;
		
		
	 printf("Vai parcelar?(Y/N)");
	 scanf(" %c",&parcelar);
	
	 if (parcelar == 'Y'){
		printf("Em Quantas parcelas?");
		scanf("%d",&QuantidadeDeParcelas);
		ValorDaParcela = ValorInformado / QuantidadeDeParcelas;
		printf("Valor da parcela é de %f",ValorDaParcela);
	}else{
		printf("O valor a ser pago é de %f",ValorInformado);
	}		
	break;

	return 0;
}
}



