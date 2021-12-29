
#include "StringProgramFunctions.h"
#include <stdio.h>


int main()
{
	char word[STR];
	char option;
	char str[60] ;
	FILE *file;
	fopen_s(&file, "text.txt", "r");
	if (file != 0) {
		fgets(str, EOF, file);
	}

	//getword(word, STR);
	
//	printf("%s", word);

}
