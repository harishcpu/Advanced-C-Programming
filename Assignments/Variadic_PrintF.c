#include <stdio.h>
#include <stdarg.h>

int PrintF(char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	int d;
	long ld;
	char c;
	char *s;
	float f;
	double lf;
	
	int i = 0;
	while(*(fmt + i)) {
		if (*(fmt + i) == '%') {
			i++;
			switch (*(fmt + i)) {
				case 'd':
					d = va_arg(ap, int);
					fprintf(stdout, "%d", d);
					i++;
					break;
				case 'c':
					c = va_arg(ap, int);
					fprintf(stdout, "%c", c);
					i++;
					break;
				case 'f':
					f = va_arg(ap, double);
					fprintf(stdout, "%.6f", f);
					i++;
					break;
				case 'l':
					i++;
					if (*(fmt + i) == 'f') {
						lf = va_arg(ap, double);
						fprintf(stdout, "%.6lf", lf);
						i++;
						break;
					} else
						break;
				case 's':
					s = va_arg(ap, char *);
					fprintf(stdout, "%s", s);
					i++;
					break;
				default:
					fprintf(stderr, "PrintF error\n");
					break;
			}
		} else
			putc(*(fmt + i++), stdout);
	}
}

int main()
{
	int a = 10;
	char c = 'A';
	float f = 3.2;
	double d = 1.234;
	char s[] = "Harish";

	PrintF("The number is %d\n", a);
	PrintF("The character is %c\n", c);
	PrintF("The float is %f\n", f);
	PrintF("The double is %lf\n", d);
	PrintF("The string is %s\n", s);

}

