//volume of sphere
#include <stdio.h>
#include<conio.h>
main()
{
	int r;
	float v;
	printf("Enter radius of sphere ");
	scanf("%d" ,&r);
	v= ((float)4/3)*(3.14)*r*r*r;
	printf("Volume of sphere is = %.3f\n",v);
	
}
