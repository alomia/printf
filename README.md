## Project Function Printf
The function created in this repository called _prinft () is in charge of executing the data printing made by the original printf ()

#### Prototype: int _print(const char *format, …)

# Description
This activity corresponds to a project defined in the curriculum established by Holberton School which directs us to the creation of a function that executes the functionalities of the "printf" function established in the standard library <stdlib>. It is an activity in pairs and in collaborative use of the github repository tools.

# Brief explanation
The function takes the arguments "char * format" and the "va_list" and initially goes through "format" in order to identify a differentiating character "%" that indicates that the next character is going to make use of one of the specifiers of conversion (% i,% d,% u,% f, etc). If this character is found, the "_casesFormat ()" function uses the "switch" conditional to verify that the conversion specifier is the same as defined in the "cases" and executes the activity defined within each corresponding "case". Each “case” replaces the “%” characters and the conversion specifier, with the arguments defined in the va_list. The result of this is the printing on the screen of the characters defined in the “format” argument, which are contained in a buffer, and the “va_list” argument.

# Example

Input

_printf("String:[%s]\n", "I am a string !");

Output

String:[I am a string !]

# Authors
Alejandro Alomia https://github.com/alomia
Adrian Felipe Ceron https://github.com/afecego
