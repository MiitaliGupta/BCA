/*To demonstrate the concept of Functions
i.	For the interest calculation of  a customer in an investment organization, 
Read the customer details which include customer number, principal money, number of years and the rate of interest. 
 Include appropriate user defined functions to read the customer details,
ii.	Calculate simple interest and compound interest using functions. 
Also Calculate the difference between  two interest values. USe two functions: one to calculate 
Simple interest and second one to calculate compound interest.
iii.	Display the customer details and the calculated interest using functions.
Modify the above program for n customers using arrays and functions.*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int details();
float simple(int p1,int t1, float r1);
float compound(int p2,int t2,float r2);
void printing();
int custno[100];
int p[100];
int t[100];
int numcust,i;
float dif[100];
float si2,ci2;
int ar[100];
float r[100];
float po;
float si1[100];
float ci1[100];
int main()
{

    printf("Enter the number of customers \n");
    scanf("%d",&numcust);
    ar[numcust];
    
    for(i=0;i<numcust;i++)
    {
    	
	
	details();
    
    
    printing();
}

	return 0;
}
int details()
{
	 for(i=0;i<numcust;i++)
    {
    	printf("Enter details of customer %d \n\n",(i+1));
	 	printf("Enter the customer number \n");
	scanf("%d",&custno[i]);
	printf("Enter the principle money\n");
	scanf("%d",&p[i]);
	printf("Enter the number of years \n");
	scanf("%d",&t[i]);
	printf("Enter the rate of interest \n");
	scanf("%f",&r[i]);
	printf("\n");
}

	return 0;
	
}
float simple(int p1,int t1, float r1)
{
	float si;
	si=(p1*t1*r1)/100.0;
	return si;
}
float compound(int p2,int t2,float r2)
{
	float ci,a,po;
	a=(1+(r2/100.0));
	po=pow(a,t2);
	ci=(p2*po)-p2;
	return ci;	
}
void printing()
{
	 for(i=0;i<numcust;i++)
    {
    	si1[i]=simple(p[i],t[i],r[i]);
    ci1[i]=compound(p[i],t[i],r[i]);
	printf(" The customer number %d \n",custno[i]);
	printf("The principle money %d\n",p[i]);
	printf(" The number of years %d \n",t[i]);
	printf("The rate of interest %3.2f \n",r[i]);
	
	printf("Simple interest = %3.2f \n",si1[i]);
	
	printf("Compound interest = %3.2f \n",ci1[i]);
	if(ci1[i]>si1[i])
	{
		dif[i]=ci1[i]-si1[i];
	}
	else
	{
		dif[i]=si1[i]-ci1[i];
	}
	printf("Difference between simple and compound interest is %3.2f \n",dif[i]);
}
}
