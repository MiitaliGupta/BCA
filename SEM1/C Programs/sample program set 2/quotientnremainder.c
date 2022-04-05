//remainder and quotient
#include<stdio.h>
#include<conio.h>
main()
{ int a,b,q,r;
    printf("Enter divident ");
    scanf("%d" ,&a);
	printf("Enter divisor ");
	scanf("%d" ,&b); 
    q=a/b;
    r=a%b;
	printf("Quotient is : %d\n ",q);
	printf("Remainder is : %d ",r);
	
}

