// biggest of three numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
		printf("enter 1st no.");
			scanf("%d",&a);
			printf("enter 2nd no.");
			scanf("%d",&b);
			printf("enter 3rd no.");
			scanf("%d",&c);
			printf("biggest no. is ");
			if(a>b&&a>c)
		    	printf("%d",a);
			else if(b>a&&b>c)
				printf("%d",b);
			else if(c>a&&c>b)
				printf("%d",c);
			
}
