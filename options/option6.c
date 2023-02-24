float findFirstPositiveNum(float arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] > 0) return arr[i];
    }
    return -1;
}

void option6(){
    int i, size;
    FILE* file = fopen("./inputs/input6.txt", "r");
    
    if (file == NULL) {
        printf("Failed to open input file.\n");
        return;
    }
    
    fscanf(file, "%d", &size);
    float arr[size];
    for ( i = 0; i < size; i++ ) fscanf(file, "%f", &arr[i]); 
    
    fclose(file);

    printf("Initial array: ");
    for( i = 0; i != size; i++) printf("%.2f ", arr[i]);
    printf("\n");
    
    float firstPositiveNum = findFirstPositiveNum(arr, size);
    
    (firstPositiveNum == -1)
	? printf("Array has no positive number\n")
	: printf("The first positive number of the array is: %.2f\n", firstPositiveNum);
    
}