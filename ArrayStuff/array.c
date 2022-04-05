/******************************************
 *                 odd.c                   *
 *               By Mau PL                 *
 *               Method #3                 *
 *                                         *
 ******************************************/
#include <stdlib.h>
#include "Library/utils.h"

int main(){
    int len = 3;

    // obtener array:
    int* arr = getArray();

    int numbersOdd = odd(arr, size(arr));
    printf("%d\n", numbersOdd);

}