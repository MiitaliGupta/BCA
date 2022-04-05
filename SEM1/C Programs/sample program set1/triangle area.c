//sample6 area of triangle
#include<stdio.h>
#include<conio.h>
main()
{
	int b,h,a;
	printf("enter base of triangle ");
	scanf("%d" ,&b);
	printf("enter height of triangle ");
	scanf("%d" ,&h);
	a = 0.5*b*h;
	printf("Area of triangle is = %d",a);
}
