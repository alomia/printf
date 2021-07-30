#include "holberton.h"
/**
 * caseFormat - select the correct type of formatter 
 * @format: pointer
 * @i: variable
 * @buff: array
 * arg: variable
 *
 * Return: j
 */
int caseFormat(const char *format, unsigned int i, unsigned int j, char buff[], va_list arg)
{

char tmp[20];

char *str_arg;

switch (format[i])
{
case 'c': {

buff[j] = (char)va_arg(arg, int);
j++;
break;
}

case 's': {
str_arg = va_arg(arg, char*);
strcpy(&buff[j], str_arg);
j += strlen(str_arg);
break;
}

case 'i': {

_itoa(va_arg(arg, int), tmp, 10);
strcpy(&buff[j], tmp);
j += strlen(tmp);
break;
}

case 'd': {

_itoa(va_arg(arg, int), tmp, 10);
strcpy(&buff[j], tmp);
j += strlen(tmp);
break;
}

case '%': {

j = buff[j] = format[i];
break;
}

}

return (j);
}
