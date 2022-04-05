#include <stdio.h>
#include "odd3.h"


int main(){
    int len = 3;
    int myArray[3];

    
    int numbersOdd = odd(myArray, len);
    printf("%d\n", numbersOdd);
}