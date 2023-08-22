#include <stdarg.h>
#include "main.h"
int _printf(const char *format, ...);


{
	va_list fs;
	va_start(fs, format);int i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'd':
					{
						int x = va_arg(fs, int);
						printf("%d", x);
						break;
					}
				case 'f':
					{
						double x = va_arg(fs, double);
						printf("%f", x);
						break;
					}
				case 'c':
					{
					int x = va_arg(fs, int);
						printf("%c", x);
						break;
					}
				case 's':
					{
						char *x = va_arg(fs, char*);
						printf("%s", x);
						break;
					}
				case 'x':
				case 'X':
					{
						int x = va_arg(fs, int);
						printf("%x", x);
						break;
					}
				case 'p':
					{
						void *x = va_arg(fs, void*);
						printf("%p", x);
						break;
					}
				case '%':
					putchar('%');
					break;
				default:
					putchar(format[i]);
					break;
			}
		}
		else
		{
			putchar(format[i]);
		}
		i++;
	}va_end(fs);
	return 0;
}	
