#include <stdio.h>
#include "min.h"

int main(){
	int numeros[5] = {596, 758, 465, 864, 687};

	printf("El menor es %d\n", numeros[min(numeros, 5)]  );
}