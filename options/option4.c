int isPrime(int n) {
    if(n <= 1) return 0;
    else if(n < 4) return 1;

    int i, max = sqrt(n);
    for(i = 2; i != max + 1; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

void option4() {
    FILE* file = fopen ("./inputs/input4.txt", "r");
    int size, i;
    fscanf(file, "%d", &size);

    int arr[size];
    for(i = 0; i != size; i++) fscanf(file, "%d", (arr+i));

    printf("Initial array: ");
    for(i= 0; i != size; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Index of all prime numbers in the list : ");
    for(i = 0; i != size; i++) {
        if(isPrime(arr[i])) printf("%d ", i);
    }
    printf("\n");
}