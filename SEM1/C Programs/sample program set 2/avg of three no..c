// Average of 3 numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	float avg;
	printf("Enter 1st no.");
	scanf("%d" ,&a);
		printf("Enter 2nd no.");
	scanf("%d" ,&b);
		printf("Enter 3rd no.");
	scanf("%d" ,&c);
	avg= (a+b+c)/(float)3;
	printf("average of three no.= %f" ,avg);
}
