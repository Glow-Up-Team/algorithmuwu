#include <stdio.h>
#include "min.h"

int main(){
	int numeros[] = {596, 758, 465, 864, 687};
	int menor;
	menor = numeros[0];

	for (int i = 1; i < sizeof(numeros) / sizeof(numeros[0]); ++i)
	{
	
		if (numeros[i] < menor) menor = numeros[i];
	}
	printf("El menor es %d\n", menor);
}