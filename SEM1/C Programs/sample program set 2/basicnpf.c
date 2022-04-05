// provident fund
#include<stdio.h>
#include<conio.h>

main()
{ int basic;
    printf("Enter basic salary ");
    scanf("%d" ,&basic);
	float pf = .12*basic;
	printf("provident fund is : %.2f ",pf);
	
}

