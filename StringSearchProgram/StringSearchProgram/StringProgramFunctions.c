
#include "StringProgramFunctions.h"
#include <stdio.h>

//for later use;
//FILE* file;
//fopen_s(&file, "text.txt", "r");
//	fclose(file);

int getline(char s[], int lim) {
	char c, n;
	n = 0;
	while ((c = getchar()) != EOF && c != '\n' && n < lim) {
		s[n] = c;
		n++;
	}
	return n;
}


int getword(char w[], int lim) {
	return 0;
}

