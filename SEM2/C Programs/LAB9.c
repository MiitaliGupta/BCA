// LAB--9
//interest calculation using functions 
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
void read();
void compound();
void simple();
void show();

int cn; //customer no
float p,r,ci,si,d,t; //principle amt , rate,compound interest,simple interest,difference in intereset,time
float a;

int main()
{ 
char f;
int n,i;
printf("LAB--9");
printf("\nThe following Program Computes Simple and Compound Interest for n Customers\n\n");	


do
{
printf("For How many customers :");
scanf("%d",&n);

for(i=1;i<=n;i++)
{	
printf("\nEnter customer details.");
read();
show();
printf("\n\n");
}
fflush(stdin);
printf("If You want to Check Again press Y\nOtherwise press any key\nYour choice : ");
scanf("%c",&f);	
}while(f=='y'|| f=='Y');

printf("\nLAB--9 Task Complete");
return(0);
}


void read()
{
printf("\nCustomer number : ");
scanf("%d",&cn);
printf("Principle Amount : ");
scanf("%f",&p);
printf("Time in years : ");
scanf("%f",&t);
printf("Rate of Interest : ");
scanf("%f",&r);
}

void compound()
{

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
printf("\n\nDetails of Customer %d Are as follows \n",cn);	
printf("\nPrinciple Amount Invested : %.2f\n",p);
printf("Time for  which  Invested : %.2f years\n",t);	
printf("Rate of Interest : %.2f%%\n",r);
printf("Simple Interest : %.2f\n",si);	
printf("Compound Interest : %.2f\n",ci);	
printf("Difference in Interest : %.2f\n",d);	
}






