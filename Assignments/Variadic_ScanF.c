#include <stdio.h>
#include <stdarg.h>

int ScanF(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	int *d;
	char *c;
	float *f;
	double *lf;

	int count = 0;
	while (*fmt) {
		if (*fmt == '%') {
			fmt++;
			switch(*fmt) {
				case 'd':
					d = va_arg(ap, int *);
					fscanf(stdin, "%d", d);
					fmt++;
					count++;
					break;
				case 'c':
					c = va_arg(ap, char *);
					fscanf(stdin, "%c", c);
					fmt++;
					count++;
					break;
				case 'f':
					f = va_arg(ap, float *);
					fscanf(stdin, "%f", f);
					fmt++;
					count++;
					break;
				case 'l':
					fmt++;
					if (*fmt == 'f') {
						lf = va_arg(ap, double *);
						fscanf(stdin, "%lf", lf);
						fmt++;
						count++;
						break;
					} else
						break;
				case 's':
					c = va_arg(ap, char *);
					fscanf(stdin, "%s", c);
					fmt++;
					count++;
					break;
				default :
					fprintf(stderr, "Error: ScanF error");
					break;
			}
		} else
			fmt++;
	}
}

int main()
{
	int d;
	char c, s[20];
	float f;
	double lf;

	ScanF("%d %c %f %lf %s", &d, &c, &f, &lf, s);
	printf("You entered %d %c %f %lf %s\n", d, c, f, lf, s);
}
