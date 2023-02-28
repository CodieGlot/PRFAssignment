#include<stdio.h>
#include<string.h>
#include<math.h>
#include "./providers/checkNumberOfString.c"
#include "./providers/info.c"
#include "./providers/checkValidChoice.c"
#include "./options/option1.c"
#include "./options/option2.c"
#include "./options/option3.c"
#include "./options/option4.c"
#include "./options/option5.c"
#include "./options/option6.c"

int main() {
    printInformation();
    
    char line[3];
    do {
    	*line = '\0';
    	do {
    		printf("Enter your choice: \n");
    		fflush(stdin);
    		scanf("%[^\n]", line);
		} while (!validChoice(line));
		
		if(*line != '0') printf("\nModify './inputs/input%c.txt' to change the input.\n", *line);
		
		switch(*line) {
			case '0':
				printf("Exit successfully");
				break;
			case '1':
				option1();
				break;
			case '2':
				option2();
				break;
			case '3':
				option3();
				break;
			case '4':
				option4();
				break;
			case '5':
				option5();
				break;
			case '6':
				option6();
				break;
		}
		
		printf("\n");
	} while (*line >= '1' && *line <= '6');
    
    return 0;
}
