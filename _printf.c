#include "holberton.h"
/**
 * _printf - sends formatted output to stdout
 * @format: pointer
 *
 * Return: j
 */
int _printf(const char *format, ...)
{

va_list arg;

unsigned int i = 0;
unsigned int j = 0;

char buff[100] = {0};

if (format == NULL)
{
return (-1);
}
va_start(arg, format);

while (format && format[i])
{

if (format[i] == '%')
{

i++;
j = caseFormat(format, i, j, buff, arg);
}

else
{

buff[j] = format[i];
j++;
}

i++;
}

fwrite(buff, j, 1, stdout);
va_end(arg);
return (j);
}
