/* 
* Fecha: 21-08-2018
* Elaborado por: Santiago Quintero
*/
#include <stdio.h>
using namespace std;

int main() 
{
	int  num[10];
	printf ("Ingrese 10 numeros: \n");
	for(int i=0; i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("Los numeros pares son:\n");
	for(int i=0; i<10;i++)
	{
		if (num[i] % 2 == 0)
		{
			printf ("%d,",num[i]);
		}
		
	}
	
	
	return 0;
}

