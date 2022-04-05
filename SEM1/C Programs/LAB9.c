// LAB--9
//interest calculation using functions 
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int cn,t; //customer no,time
float p,r,ci,si,d; //principle amt , rate,compound interest,simple interest,difference in intereset
void read()
{
printf("\nCustomer number : ");
scanf("%d",&cn);
printf("Principle Amount : ");
scanf("%f",&p);
printf("Time in years : ");
scanf("%d",&t);
printf("Rate of Interest : ");
scanf("%f",&r);
}

void compound()
{
float a;
a= p*pow((1+(r/(float)100)),t);
ci=a-p;
}

void simple()
{
si=(p*r*t)/((float)100);
}

void show()
{
compound();
simple();
d=ci-si;
printf("Details of Customer %d Are :\n",cn);	
printf("Principle Amount Invested : %.2f\n",p);
printf("Time for  which  Invested : %d\n",t);	
printf("Rate of Interest : %.2f\n",r);
printf("Simple Interest : %.2f\n",round(si));	
printf("Compound Interest : %.2f\n",round(ci));	
printf("Difference in Interest : %.2f\n",round(d));	
}

main()
{ 
char f;
int n,i;
prinf("LAB--9");
printf("\nThe following Program Computes Simple and Compound Interest for n Customers\n\n");	


do
{
printf("For How many customers ?");
scanf("%d",&n);

for(i=1;i<=n;i++);
{	
printf("\nEnter customer details.");
read();
show();
printf("\n\n");
}

printf("If You want to Check Again press Y\nOtherwise press any key\nYour choice : ");
scanf("%c",&f);	
}while(f=='y'|| f=='Y');

printf("\nLAB--9 Task Complete");
}







