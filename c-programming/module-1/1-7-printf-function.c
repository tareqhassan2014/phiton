#include <stdio.h>

/*
How printf() function works?
The printf() function is a library function. It is used to print the character, string, float, integer, octal and hexadecimal values onto the output screen.

Syntax of printf() function:
printf("format string", argument list);

special characters used in format string:
\n - new line
\t - horizontal tab
\v - vertical tab
\b - backspace
\r - carriage return
\f - form feed
\a - alert or bell
\\ - backslash
\? - question mark
\' - single quote
\" - double quote
\0 - null character

format specifiers used in format string:
%c - character
%s - string
%d - decimal integer
%o - octal integer
%x - hexadecimal integer
%f - float
%lf - double
 */

int main()
{
    printf("Hello World!");
    return 0;
}
