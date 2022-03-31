/******************************************
 *                 odd.c                   *
 *               By Mau PL                 *
 *               Method #1                 *
 ******************************************/
#include <stdio.h>

int main(){
    int i, k;

    printf("Insert the max input of elements in the array: ");
    scanf("%d", &k);

    printf("All numbers from 1 to %d are:  \n", k);

    for(int i = 1; i <= k; i++){
        if(i % 2 !=0){
            printf("%d \n", i);
        }
    }
    return 0;
}