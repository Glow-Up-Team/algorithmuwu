int* getArray(){
    int len  = 0;
    printf("Please, add the Size of the array: ");
    scanf("%d", &len);

    int* arrayEmpty = (int*)malloc(sizeof(int) * len);


    for(int i = 0; i < len; i++){
        printf("Insert the elements of the array: ");
        scanf("%d", &arrayEmpty[i]);
    };
    return arrayEmpty;
}

int size(int* arr){
    int size = 0;
    for(int i= 0; arr[i] == NULL;i++){
        size++;
    }
    return size;
}