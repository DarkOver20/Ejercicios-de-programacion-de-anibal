#include<stdio.h>

int main()
{
	int i, numero;
	

	printf("\nDigite un numero del 1-10 para ejecutar su tabla de multiplicar: ");
        scanf ("%i" , &numero);

	for(int i=1; i<=10; i++)
	{
		printf("\n %i * %i = %i " , numero , i , numero * i);
	}
	return 0;
}