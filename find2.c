/******************************************
 *                 find.c                  *
 *               By Mau PL                 *
 *               Method #2                 *
 ******************************************/
#include <stdio.h>

int main(){
    int arr[10], num, index;
    int i;
    int found = 0;
    int pos = 0; 
    int increase = 0;

    printf("Set the number of elements in the array [Max Size = 10]: \n");
    scanf("%d", &num);

    printf("Enter the elements: \n");
    for(i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    
    printf("Please insert the element you want to search in the array: ");
    scanf("%d", &index);

    for(i = 0; i < num; i++){
        if(arr[i] == index){
            increase++;
            
            printf("The element %d was found in index: %d \n", index, i+1);
        }
    }
    if(increase == 0){
        printf("The element was not found :( \n");
    }else {
        printf("The element %d is found %d times in the existing array! \n", index, increase);
    }
    return 0;
}