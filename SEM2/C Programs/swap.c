// no. swapping
#include<stdio.h>
#include<conio.h>
main()
{ int a,b,c;
    printf("Enter 1st no.");
    scanf("%d" ,&a);
	printf("Enter 2nd no.");
	scanf("%d" ,&b);
	printf("a is : %d \nb is : %d\n",a,b);
	c=a;
	a=b;
	b=c;
	 printf("After swapping \n");
	printf("a is : %d \nb is : %d\n",a,b);
	
}

