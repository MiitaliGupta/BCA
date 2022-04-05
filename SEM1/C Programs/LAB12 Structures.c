//LAB--12
//Pointers and call by value n reference
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

struct employee
{
	int empno;
	char name[100];
	float basic,da,hra,pf,tax,gross,td,netsal;
	
};

void input(struct employee s[],int n);
void cal(struct employee s[],int n);
void show(struct employee s[],int n);

main()
{ char t;
int w,i;
printf("The Following Program Demonstrates the usage of Stucture in computing Employee Salary\n\n");

   do
   {
	int n;
	printf("For how many Employees do you need to check the net salary : ");
	scanf("%d",&n);
	struct employee st[n];
	input(st,n);
	for(i=0;i<n;i++)
	{
	w=isName(st[i].name);
        if(w==1)//if1
        {
	cal(st,n);
	show(st,n);
       
       }//if1
		else//else1 
		{
          printf("Invaid Input.\nEmployee Name Can only Contain Alphabets and Spaces");
          break;
      }//else
  }//for
	
printf("\n\n");
fflush(stdin);
printf("Do You want to Try Again\nIf Yes press 1\nOtherwise press any key\nYour choice : ");
scanf("%c",&t);	
printf("\n\n");
}while(t=='1');


printf("\nLAB--12 Task Complete");
}
void input(struct employee s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter Details of Employee %d\n",(i+1));
		printf("\nEnter Employee Number : ");
		scanf("%d",&s[i].empno);
		fflush(stdin);
		printf("Enter Employee Name : ");
		gets(s[i].name);
		printf("Enter Employee's Basic Salary : ");
		scanf("%f",&s[i].basic);
		s[i].da=(40/(float)100)*s[i].basic;
	    s[i].hra=4500.0;
	    s[i].pf =(4/(float)100)*s[i].basic;
	    s[i].tax=(10/(float)100)*s[i].basic;
	    printf("\n\n");
    }
}

void cal(struct employee s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{  s[i].gross = s[i].basic+s[i].da+s[i].hra;
	   s[i].td = s[i].pf+s[i].tax;
	   s[i].netsal = s[i].gross-s[i].td;
	}
}

void show(struct employee s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Details of Employee %d\n",(i+1));
		printf("\nEmployee Number : %d\n",s[i].empno);
		printf("Employee Name : ");
		puts(s[i].name);
		printf("Employee's Basic Pay : %.2f\n",s[i].basic);
		printf("Employee's DA : %.2f\n",s[i].da);
		printf("Employee's HRA : %.2f\n",s[i].hra);
		printf("Employee's PF : %.2f\n",s[i].pf);
		printf("Employee's Income Tax : %.2f\n",s[i].tax);
		printf("Employee's Gross Salary : %.2f\n",s[i].gross);
		printf("Employee's Total Deduction : %.2f\n",s[i].td);
		printf("Employee's Net Salary : %.2f\n",s[i].netsal);
	
		printf("\n\n");
    }
}






















