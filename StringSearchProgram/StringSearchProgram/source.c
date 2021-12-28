
#include "StringProgramFunctions.h"
#include <stdio.h>


int main()
{
	int result;
	char s[LINE];
	result = getline(s, LINE);
	printf("number of chars: %d", result);
	
}
