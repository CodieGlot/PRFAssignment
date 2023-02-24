void option5() {
	FILE* file = fopen ("./inputs/input5.txt", "r");
	long n;
	fscanf(file, "%ld", &n);
	fclose(file);
	
	printf("Number of ways to get %ldVND from 10k, 20k and 50k: ", n);
	n /= 10000;
	int max50 = n / 5;
	int i, res = 0;
	for(i= 0; i != max50 + 1; i++) res += (n - 5*i) / 2 + 1;
	
	printf("%d\n", res);
	
}
