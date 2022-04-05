/*LAB--4
Simple and Nested Switch case
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
printf("LAB 4\n\n");
	int f = 1;
	while(f==1)
	{
	
	printf("To compute Number of days according to month press a\n");
	printf("To compute net pay accoring to job code press b\n");
	printf("Your choice ");
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		
	case 'a':
	{
		
	printf("\nThe following computation is to calculate Number of days according to month number\n\n");
	printf("Enter any month number of your choice\n");
	int a;
	printf("Month number : ");
	scanf("%d",&a);	
	switch(a)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("The entered month number contains 31 days\n");
		break;
		
	case 2:
	case 4:
	case 6:
	case 9:
	case 11:
		printf("The entered month number contains 30 days\n");
		break;
	default:
		printf("The entered month number is invalid\n");
		break;
	}
	break;
   }
   
   
  case 'b': 
   {	printf("\nThe following computation is to calculate net pay accoring to job code\n\n");
	printf("Enter Job Id as 1 or 2\n");
	int id;
	float basic,da=0.0,hra=0.0,net=0.0,allow=0.0,ded=0.0,pf=0.0,ptax=0.0;
	printf(" Job Id : ");
	scanf("%d",&id);	
	switch(id)
	{
	case 1:
	{printf("Enter Basic Salary : ");
	scanf("%f",&basic);
	da=(45/(float)100)*basic;
	hra=5500.0;
	pf =(4/(float)100)*basic;
	ptax = 100.0;
	allow = da+hra;
	ded = pf+ptax;
	net= basic+allow-ded;
	printf("\n\n Basic Salary : %.2f\n",basic);
	printf(" DA : %.2f\n",da);
	printf(" HRA : %.2f\n",hra);	
	printf(" PF : %.2f\n",pf);
	printf(" Professional Tax : %.2f\n",ptax);
	printf(" Allowance : %.2f\n",allow);
	printf(" Deduction : %.2f\n",ded);
	printf(" Netpay : %.2f\n",net);
	break;
	}
   case 2:
   	{printf("Enter Basic Salary : ");
	scanf("%f",&basic);
	da=(40/(float)100)*basic;
	hra=4500.0;
	pf =(4/(float)100)*basic;
	ptax = 100.0;
	allow = da+hra;
	ded = pf+ptax;
	net= basic+allow-ded;
	printf("\n\n Basic Salary : %.2f\n",basic);
	printf(" DA : %.2f\n",da);
	printf(" HRA : %.2f\n",hra);	
	printf(" PF : %.2f\n",pf);
	printf(" Professional Tax : %.2f\n",ptax);
	printf(" Allowance : %.2f\n",allow);
	printf(" Deduction : %.2f\n",ded);
	printf(" Netpay : %.2f\n",net);
	break;
	}
   default : 
   {printf("Enter Basic Salary : ");
	scanf("%f",&basic);
	da=(35/(float)100)*basic;
	hra=3500.0;
	pf =(4/(float)100)*basic;
	allow = da+hra;
	ded = pf+ptax;
	net= basic+allow-ded;
printf("\n\n Basic Salary : %.2f\n",basic);
	printf(" DA : %.2f\n",da);
	printf(" HRA : %.2f\n",hra);	
	printf(" PF : %.2f\n",pf);
	printf(" Professional Tax : %.2f\n",ptax);
	printf(" Allowance : %.2f\n",allow);
	printf(" Deduction : %.2f\n",ded);
	printf(" Netpay : %.2f\n",net);
	break;
   }
   
   }
   break;
  }
 default:
  	{
	printf("Invalid Choice");
  	break;
	}
}
printf("\n\nDo you want to choose again?\nThen press 1 \nOtherwise press 0\n");
printf("Your choice ");
scanf("%d",&f);
printf("\n\n");
fflush(stdin);

}	
	
printf("\n\nLAB 4 Task Completed");	
} 

