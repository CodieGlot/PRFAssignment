void option3() {
    FILE* file = fopen ("./inputs/input3.txt", "r");
    int size, i;
    fscanf(file, "%d", &size);

    char arr[size][21];
    for(i = 0; i != size; i++) fscanf(file, "%s", (arr+i));

    printf("Initial array: ");
    for(i= 0; i != size; i++) printf("%s ", arr[i]);
    printf("\n");

    printf("Numbers with the rightmost digit equals to 5 : ");
    for(i = 0; i != size; i++) {
        if(arr[i][strlen(arr[i]) - 1] == '5') printf("%s ", arr[i]);
    }
    printf("\n");
}