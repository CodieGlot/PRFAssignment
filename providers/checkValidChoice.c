int validChoice(char* line) {
	if(*(line+1) == '\0' && *line >= '0' && *line <= '6') return 1;
	printf("\nInvalid input. Please enter again.\n");
	return 0;
}