#include <stdio.h>
#include "find.h"

int arr[] = {315,153,135,12};
int len = sizeof(arr)/sizeof(arr[0]);
int catch = 153;

int main(){
    int index = find(arr, len, catch);
    printf("The number %d was found in the index %d \n", arr[index], index);
}