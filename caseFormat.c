#include "holberton.h"
#include <string.h>

int caseFormat(const char *format, unsigned int i, unsigned int j, char buff[], char tmp[], va_list args)
{

char *str_arg;

switch (format[i])
{
case 'c': {

buff[j] = (char)va_arg(args, unsigned int);
j++;
break;
}

case 'i': {

_itoa(va_arg(args, unsigned int), tmp, 10);
strcpy(&buff[j], tmp);
j += strlen(tmp);
break;
}

case 'd': {

_itoa(va_arg(args, unsigned int), tmp, 10);
strcpy(&buff[j], tmp);
j += strlen(tmp);
break;
}

case 'x': {

_itoa(va_arg(args, unsigned int), tmp, 16);
strcpy(&buff[j], tmp);
j += strlen(tmp);
break;
}

case 'o': {
_itoa(va_arg(args, unsigned int), tmp, 8);
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

case '%': {

j = buff[j] = format[i];
break;
}

}
return (j);
}
