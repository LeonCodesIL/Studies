
#include "StringProgramFunctions.h"
#include <stdio.h>

//for later use;
//FILE* file;
//fopen_s(&file, "text.txt", "r");
//	fclose(file);

//return how many lines there are in a line from the stdin
int getline(char s[], int lim) {
	char c, n;
	n = 0;
	while ((c = getchar()) != EOF && c != '\n' && n < lim) {
		s[n] = c;
		n++;
	}
	s[n] = '\0';
	return n;
}



//return numbers of letters in a word in stdin
int getword(char w[], int lim) {
	char c, n;
	n = 0;
	while ((c = getchar()) != EOF && c != '\n' &&  c != ' ' && c != '\t' && n < lim) {
		w[n] = c;
		n++;
	}
	w[n] = '\0';
	return n;
}


//check is str2 hold str2
int substring(char* str1, char* str2) {
	char* s1 = str1;
	char* s2 = str2;
	int i, j;
	i = j = 0;
	while (s1[i] != '\0') {
		if (s1[i] == s2[j]) {
			j++;
		}
		else { j = 0; }

		i++;

		if (s2[j] == '\0') {
			return 1;
		}
	}
	return 0;
}

// check if string (t) can be returned by omitting a certain amount of chars (n) from string (s)
int similar(char* s, char* t, int n) {
	char* s1 = s;
	char* s2 = t;
	int i, j, OtherLetter;
	i = j = OtherLetter = 0;
	while (s1[i] != '\0') {
		if (s1[i] == s2[j]) {
			j++;
		}
		else {
			OtherLetter++;
		}

		i++;

		if (s2[j] == '\0' && OtherLetter <= n) {
			return 1;
		}
	}
	return 0;
}

void print_lines(char* str) {
	
}



