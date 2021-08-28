//multiplicacion
#include <stdio.h>


using namespace std;

int main(){
	
	int i, numero;
	
	printf("Digite un numero entre 1-10: "); scanf("%i",&numero);
	if((numero>1) && (numero<=10)){
		
		printf("La tabla de umplitiplicar de " );
		for(i=1; i<=10; i++){
			printf("\n %i * %i = %i " , numero , i , numero * i);
		}
		
	}else{
		printf("Digite un numero dentro 1-10");
	}
	
	return 0;
}