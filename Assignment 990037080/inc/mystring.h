#ifndef __MYSTRING_H
#define __MYSTRING_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strcopy(char*string1, char*string);
int strlength(char *str);
int strcomp(const char* str1, const char* str2);
char *strconcat(char *destination, const char *source);


#endif