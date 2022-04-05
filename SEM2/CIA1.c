// CLAB CIA1
#include<stdio.h>
#include<stdlib.h>
main()
{
	printf("C LAB CIA 1\n\n");
	int f = 1;
	do
	{
		printf("The Following Program Computes for Cost Of Flat according to customer type and floor number\n\n");
		int bp,fn;
		float e,w,a,amt;
		char c;
		printf("Enter Base Price of the flat : ");
		scanf("%d",&bp);
		fflush(stdin);
		printf("For Domestic Customer press D\nFor Commercial Customer press C\nYour Choice : ");
		scanf("%c",&c);
		printf("Enter Floor Number of the flat : ");
		scanf("%d",&fn);
	
		switch(c)
		{
			case'd':
			case'D':
				{
					if(fn>0&&fn<6)
					{
						e= 0.10*bp;
						w= 0.12*bp;
						a= 0.20*bp;
					}//if
					else if(fn>5&&fn<11)
					{
						e= 0.125*bp;
						w= 0.145*bp;
						a= 0.225*bp;
						
					}//else if
					else
					printf("Invalid Floor No.");
				break;
				}//case D
			case'c':
			case'C':
				{
					if(fn>0&&fn<6)
					{
						e= 0.20*bp;
						w= 0.22*bp;
						a= 0.30*bp;
					}//if
					else if(fn>5&&fn<11)
					{
						e= 0.24*bp;
						w= 0.28*bp;
						a= 0.32*bp;
						
					}//else if
					else
					printf("Invalid Floor No.");
				break;
				}//case C
			default:
			printf("Invalid Customer type");
			break;		
		}//switch
		amt = bp+e+w+a;
		printf("\n\n");
		if(c=='d'|| c=='D')
		printf("Customer Type is Domestic\n");
		else
		printf("Customer Type is Commercial\n");
		printf("Base Price : %d\n",bp);
	    printf("Floor No. : %d\n",fn);
	    printf("Electricity Charges : %0.2f\n",e);
	    printf("Water Charges : %0.2f\n",w);
	    printf("Additional Charges : %0.2f\n",a);
	    printf("Total Cost : %0.2f\n",amt);
    
	    printf("\n Do you Want to choose again?\nPress 1 for Yes\nPress 0 for No\nYour choice : ");
	    scanf("%d",&f);
	    printf("\n\n");	
	}while(f==1);//while
}//main
