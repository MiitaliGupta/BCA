// sample3 different format specifiers in use
#include<stdio.h>
#include<conio.h>
main()
{   printf("70\n");
	printf("using int(d) %d\n",70);
	printf("using int(i) %i\n",70);
	printf("using int(d) %d\n",-70);
	printf("using octal(o) %o\n",70);
	printf("using hexadecimal(X) %X\n",70);
	printf("using unsigned(u) %u\n",70);
	printf("using shortint(hd) %hd\n",70);
	printf("12345670\n");
	printf("using longint(ld) %ld\n", 12345670);
	printf("using float(f) %f\n",70.0);
	printf("using double(lf) %lf\n",70.0);
	printf("1234567.89\n");
	printf("using e %e\n",1234567.89);
	printf("using e %e\n",-1234567.89);
	printf("using E %E\n",1234567.89);
	printf("using f %f\n",1234567.89);
	printf("using lf %lf\n",1234567.89);
	printf("using g %g\n",1234567.89);
	printf("using G %G\n",1234567.89);
	printf("using char %s\n","a");
}
