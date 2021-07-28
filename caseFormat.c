#include "holberton.h"

int caseFormat(const char *format, int i, int j, char buff[], char tmp[], va_list args)
{

char *str_arg;

switch (format[i])
{
case 'c': {

buff[j] = (char)va_arg(args, int);
j++;
break;
}

case 'd': {

_itoa(va_arg(args, int), tmp, 10);
strcpy(&buff[j], tmp);
j += strlen(tmp);
break;
}

case 'x': {

_itoa(va_arg(args, int), tmp, 16);
strcpy(&buff[j], tmp);
j += strlen(tmp);
break;
}

case 'o': {
_itoa(va_arg(args, int), tmp, 8);
strcpy(&buff[j], tmp);
j += strlen(tmp);
break;
}

case 's': {
str_arg = va_arg(args, char*);
strcpy(&buff[j], str_arg);
j += strlen(str_arg);
break;
}
}
return (j);
}
