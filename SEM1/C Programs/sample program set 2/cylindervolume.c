//sample10 volume of cylinder
#include<stdio.h>
#include<conio.h>
main()
{
	float r,h,v;
	printf("enter radius of cylinder ");
	scanf("%f" ,&r);
	printf("enter height of cylinder ");
	scanf("%f" ,&h);
    v= 3.14*r*r*h; 
	printf("Volume of cylinder is = %f",v);
}
