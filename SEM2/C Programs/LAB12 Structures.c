//LAB--12
//Structures
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

struct employee
{
	char empno[100];
	char name[1000];
	char basic[1000];
	float da,hra,pf,tax,gross,td,netsal;
	
};

int isNumeric(char str[100]);
int isName(char str[100]);

void input(struct employee s[],int n);
void cal(struct employee s[],int n);
void show(struct employee s[],int n);

main()
{ char t;
int w,x,y,i,k=1;
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
	x=isNumeric(st[i].empno);
	y=isNumeric(st[i].basic);		
	w=isName(st[i].name);
        if(w==1&&x==1&&y==1)//if1
        {
	cal(st,n);
	k=1;
       
       }//if1
		else//else1 
		{ k=0;
          printf("Invaid Input.\nEmployee Name Can only Contain Alphabets and Spaces\nAlso Enter only numeric value for Employee Number and Basic Salary");
          break;
      }//else
  }//for
  if(k==1)
show(st,n);	
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
		fflush(stdin);
		printf("\nEnter Employee Number : ");
		gets(s[i].empno);
		fflush(stdin);
		printf("Enter Employee Name : ");
		gets(s[i].name);
		fflush(stdin);
		printf("Enter Employee's Basic Salary : ");
		gets(s[i].basic);
	    printf("\n\n");
    }
}


void cal(struct employee s[],int n)
{
	int i;
	float x=0.0;
	for(i=0;i<n;i++)
	{  x=atof(s[i].basic);
	   s[i].da=(40/(float)100)*x;
	   s[i].hra=4500.0;
	   s[i].pf =(4/(float)100)*x;
	   s[i].tax=(10/(float)100)*x;
	   s[i].gross = x+s[i].da+s[i].hra;
	   s[i].td = s[i].pf+s[i].tax;
	   s[i].netsal = s[i].gross-s[i].td;
	   
	}
}

void show(struct employee s[],int n)
{
	int i;
	float x=0.0;
	for(i=0;i<n;i++)
	{   x=atof(s[i].basic);
		printf("Details of Employee %d\n",(i+1));
		printf("\nEmployee Number : %s\n",s[i].empno);
		printf("Employee Name : ");
		puts(s[i].name);
		printf("Employee's Basic Pay : %.2f\n",x);
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

int isName(char str[100])
{
	int i,k;
    	for (i = 0; i<strlen(str); i++)
     	{
  	    	if ( isalpha(str[i]) || isspace(str[i])) 
  	    	  k=1;
  	        else 
  	         {
			  k=0;  
			  break;
		     }
	    }
   return k;
}


int isNumeric(char str[100])
 {int i,f=1;
   for ( i = 0; i < strlen(str); i++)
   {  if(str[i] == '.')
      f=1;
      else if (isdigit(str[i]))
	  f=1;
	   else
	  {
	  f = 0;
	  break;
      }
    
   }
   return f;
}

















