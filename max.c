#include "./max.h"
#include <stdio.h>
#include <stdlib.h>


int arr[] = {5 , 6 , 89 ,8 ,9};
int len = sizeof(arr)/sizeof(arr[0]);    


int main(){
    

	int maxIndex = max(arr, len);
	printf("Max number Value: %d\n", arr[maxIndex], maxIndex);
    return 0;
}