//sample9 area and perimeter of rectangle
#include<stdio.h>
#include<conio.h>
main()
{
	int b,h,a,p;
	printf("enter base of rectangle ");
	scanf("%d" ,&b);
	printf("enter height of rectangle ");
	scanf("%d" ,&h);
	p=2*(b+h);
	a = b*h;
	printf("Area of rectangle is = %d\n",a);
	printf("perimeter of rectangle is = %d",p);
}
