#include <stdio.h>
#include "odd3.h"
#include "find.h"
#include "min.h"
#include "max.h"


int arr[] = {315,153,135,12};
int len = sizeof(arr)/sizeof(arr[0]);
int catch = 153;
int myArray[3];

int main(){
    int index = find(arr, len, catch);
    printf("The number %d was found in the index %d \n", arr[index], index);

    int numbersOdd = odd(myArray, len);
    printf("%d\n", numbersOdd);

    int maxIndex = max(arr, len);
	printf("Max number Value: %d\n", arr[maxIndex], maxIndex);

    printf("El menor es %d\n", numeros[min(numeros, 5)]);
}