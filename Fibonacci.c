#include <stdio.h>



void fib(FILE* f, int num){	
	int a,b,c,i;
	a = 0;
	b = 1;

	fprintf(f,"0 ");
	fprintf(f,"1  ");
	for(i = 0;i<num;i++){
	
		c = a + b;
		a = b ;
		b = c;

		char buff[10];
		sprintf(buff,"%d ",c);
	
		fprintf(f,buff);
	
	}	
}

int main() {
FILE* f = fopen("fib.txt","w");
fib(f,100);

fclose(f);
	
	return 0;
}
