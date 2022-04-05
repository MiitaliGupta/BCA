//sample8 simple interest
#include<stdio.h>
main()
{
	int n;
	float si,r,p;
	printf("enter principle amount ");
	scanf("%f" ,&p);
	printf("enter rate ");
	scanf("%f" ,&r);
	printf("enter time in years ");
	scanf("%d" ,&n);
	si = (p*r*n)/100;
	printf("Simple Interest = %f" ,si );
	
}
