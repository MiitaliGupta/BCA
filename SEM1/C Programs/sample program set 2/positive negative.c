// positive negative no.
#include <stdio.h>
#include<conio.h>
main()
{
	int a,x,f=1;
	for(int i=1;i>0;i++)
	{
	printf("enter a no.");
	scanf("%d" ,&a);
	if(a>=0)
	printf(" no. is positive \n");
	else 
	printf(" no. is negative \n");
	printf("if you want to continue press 1 ortherwise press 0 \n enter your choice ");
	scanf("%d",&x);
	f=x;
	if(f==0)
	break;
   }
   printf("task ended");
	
}
