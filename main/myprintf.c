#include <stdio.h>
#include <stdarg.h>

void _printf(const char* format, ...);

void _printf(const char* format, ...){
va_list print;
va_start(print, format);

for (int i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
switch (format[++i])
{
case 'c':
putchar(va_arg(print, int));
break;
case 'd':
printf("%d", va_arg(print, int));
break;
case 'f':
printf("%f", va_arg(print, double));
break;
case 's':
fputs(va_arg(print, char*), stdout);
break;
default:
putchar('%');
--i;
break;
}
}
else
{
putchar(format[i]);
}
}
va_end(print);
}
