/* Calculate of age*/
#include<stdio.h>
#include<conio.h>
main()
{
	int cyear,byear,age;
	printf("enter current year = ");
	scanf("%d" ,&cyear);
	printf("enter birth year = ");
	scanf("%d" ,&byear);
	age = cyear - byear;
	printf("age = %d" ,age);
	
}
