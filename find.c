/******************************************
 *                 find.c                  *
 *               By Mau PL                 *
 *               Method #1                      *
 ******************************************/

#include <stdio.h>

int main(){
    int array[] = {2,4,6,8,12};
    int x = 8;

    int arrayLen = sizeof array / sizeof array[0];
    int index = -1; 

    for (int i = 0; i < arrayLen; i++){
        if(array[i] == x){
            index = i; 
            break;
        }
    }
    if (index > -1){
        printf("Find the index: %d\n",index);
    }else {
        printf("%d is not an element in the array \n");
    }
    return 0;
}