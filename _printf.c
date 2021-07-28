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
case_format(format, buff, tmp, str_arg, i, j);
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
