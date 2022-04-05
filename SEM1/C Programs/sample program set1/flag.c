//sample4 flags
#include<stdio.h>
main()
{
int x= 546,y=10;
    printf("x is %d  , y is %d \n" ,x ,y );
	printf("Flag - in Integer x is %-7d\n",x);
	printf("Flag + in Integer x is %+7d\n",x);	
	printf("Flag + in Integer x is %+7d\n",-x);	
	printf("Flag space in Integer x is % d\n",x);
	printf("Flag # in Integer x is %#o\n",x);
	printf("Flag # in Integer x is %#x\n",y);
	printf("Flag # in Integer x is %#X\n",y);
	printf("Flag 0 in Integer x is %07d\n",y);
}
