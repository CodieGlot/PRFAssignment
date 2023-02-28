void option2() {
    FILE* file = fopen ("./inputs/input2.txt", "r");
    int size, i;
    fscanf(file, "%d", &size);

    char arr[size][21];
    for(i = 0; i != size; i++) {
        fscanf(file, "%s", (arr+i));
        if(!isNumber(arr[i], strlen(arr[i]))) {
            printf("Invalid input (The array should only contain numbers)\n");
            return;
        }
    } 

    printf("Initial array: ");
    for(i= 0; i != size; i++) printf("%s ", arr[i]);
    printf("\n");

    printf("Palindrome numbers in the array : ");
    for(i = 0; i != size; i++) {
        int j;
        int isPalindrome = 1;
        for(j = 0; j  != strlen(arr[i]) / 2; j++) {
            if(arr[i][j] != arr[i][strlen(arr[i])-1-j]) {
                isPalindrome = 0;
                break;
            }
        }
        if(isPalindrome) printf("%s ", arr[i]);
    }
    printf("\n");
}
