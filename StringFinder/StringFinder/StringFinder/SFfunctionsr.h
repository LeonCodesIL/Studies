#pragma once

#define LINE 256
#define STR 30

int getline(char s[], int lim);
int getword(char w[], int lim);
int substring(char* str1, char* str2);
int similar(char* s, char* t, int n);
void print_lines(char* str);
void print_similar_words(char* str);