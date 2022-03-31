/******************************************
 *                 odd.c                   *
 *               By Mau PL                 *
 *               Method #3                 *
 *                                         *
 ******************************************/

#include <stdio.h>

int main(){
    int Size;
    int i;
    int arr[10];
    int Odd_Count = 0;

    printf("Please, add the Size of the array: ");
    scanf("%d", &Size);

    printf("Insert the elements of the array: ");
    for(i = 0; i < Size; i++){
        scanf("%d", &arr[i]);
    }
    //Checking if its odd
    for(i = 0; i < Size; i++){
        if(arr[i] % 2 == 0){
            Odd_Count++;
        }
    }
    printf("The Odd numbers in the array are: %d \n", Odd_Count);
}