#include "holberton.h"
/**
 * _printf - sends formatted output to stdout
 * @format: pointer
 *
 * Return: j
 */
int _printf(const char *format, ...)
{

va_list args;

int i = 0;
int j = 0;

char buff[100] = {0};
char tmp[20];
char *str_arg;

va_start(args, format);

while (format && format[i])
{

if (format[i] == '%')
{

i++;
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
}

else
{

buff[j] = format[i];
j++;
}

i++;
}

fwrite(buff, j, 1, stdout);
va_end(args);
return (j);
}
