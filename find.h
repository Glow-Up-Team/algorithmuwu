int find(int arr[], int len, int catch){
    int index = 0;
    for(int i = 0; i < len; i++){
        if (arr[i] == catch){
            index++;
        };
    };
    return index;
};