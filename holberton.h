#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/*invert the given chain*/
char *_strrev(char *str);

/*converts int data type to string data type*/
char *_itoa(int i, char *strout, int base);

/*sends formatted output to stdout*/
int _printf(const char *format, ...);

/* function to distinguish the format of a variable*/
int caseFormat(const char *, unsigned int, unsigned int, char *, char *, va_list);

#endif

