.\" Manpage for _printf.
.TH man 8 "19 April 2022" "1.0" "_printf man page"
.SH NAME
_printf - format and write a string, character, or integer to stdout
.SH SYNOPSIS
#include "main.h"
.br
#include <stdarg.h>
.br
#include <stdlib.h>
.br
.br
int _printf(const char *format, ...)

.SH DESCRIPTION
The function _printf() produces output according to a format as described below. The functions printf() writes output to stdout, the standard output stream.

.SS Return value
Upon successful return, these functions return the number of characters
printed (excluding the null byte used to end output to strings).

If an output error is encountered, a negative value is returned.

.SS The format string:
.br
The format string is a character string, composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream. Each conversion specification is introduced by the character %, and ends with the conversion specifier.

.SS The conversion specifiers:
.br
A character that specifies the type of conversion to be applied. The conversion specifier and their meanings are:
.br
d, i - The int argument is converted to signed decimal notation.
.br
c -  The int argument is converted to an unsigned char, and the resulting character is written.
.br
s -  The const char * argument is expected to be a pointer to an array of character type (pointer to a string).

.SH EXAMPLE
.br
Print a string literal:
.br
int a = 0;
.br
char *a_string = "cat";
.br
a = _printf("test %s\n", a_string);
.br
printf("%d\n", a);
.br
return (0);
.br
.SS General Formatting:
.br
_printf("example format string [ % [ (c) (s) (d) (i) ]]", [variable] [string literal)
.br
.SH SEE ALSO
printf(1), asprintf(3), dprintf(3), scanf(3)
.br
.SH BUGS
No known bugs.
.SS COLOPHON
.br
This page was produced is collaboration with Roc-A-Fella Records. A description of the project can be found at jada jada jada.
.SH AUTHOR
.B Abinet Tefera and Yonas Chali
