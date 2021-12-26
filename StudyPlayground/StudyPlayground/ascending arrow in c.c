#include <stdio.h>

#define IN 1
#define OUT 0
void main()
{
	char c;
	int counter, num_of_strings;
	counter = num_of_strings = 0;

	while ((c = getchar()) != EOF) {
		printf("%c\n", c);
		if (c == 'a') {
			counter = 0;
			counter++;
		}
		else if (c == 'b' && counter == 1) {
			counter++;
		}
		else if (c == 'c' && counter == 2) {
			counter++;
		}
		else { counter = 0; }

		if (counter == 3) {
			counter = 0;
			num_of_strings++;
		}
	}
	printf("the string abc has occured %d times.", num_of_strings);

}