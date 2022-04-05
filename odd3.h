/******************************************
 *                 odd3.h                  *
 *               By Mau PL                 *
 *               Method #3                 *
 *                                         *
 ******************************************/

#include <stdio.h>
#include <stdlib.h>

int odd(int* myArray, int len){
    // int i;
    int Odd_Count = 0;

    printf("Please, add the Size of the array: ");
    scanf("%d", &len);

    printf("Insert the elements of the array: ");
    for(int i = 0; i < len; i++){
        scanf("%d", &myArray[i]);
    }
    //Checking if its odd
    for(int i = 0; i < len; i++){
        if(myArray[i] % 2 != 0){
            Odd_Count++;
        }
    }
    return Odd_Count;
}
