#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/*invert the given chain*/
char *_strrev (char *str);

/*converts int data type to string data type*/
char * _itoa(int i, char *strout, int base);

/*sends formatted output to stdout*/
int _printf(const char *format, ...);

<<<<<<< HEAD

int case_format(char *format, char buff, char tmp, char *str_arg, int i, int j);
=======
int caseFormat(const char *format, int i, int j, char buff[], char tmp[], va_list args);
>>>>>>> b70eaff13a79c0125206bd0a039dc1f88530d63f

#endif
