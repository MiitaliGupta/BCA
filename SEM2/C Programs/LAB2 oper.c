// different types of operators
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 main()
{
	int i,i1,j,k,e2 ,e5;
	float f,e1,z;
	char c;
	printf("Enter value of i ");
	scanf("%d",&i);
	printf("Enter value of i1 ");
	scanf("%d",&i1);
	printf("Enter value of j ");
	scanf("%d",&j);
	printf("Enter value of k ");
	scanf("%d",&k);
	printf("Enter value of f ");
	scanf("%f",&f);
	fflush(stdin);
	//flushall();
	printf("Enter a character ");
	scanf("%c",&c);
	e1= (++i+c)-(2*f/5);
	e2= (i>=6)&&(c==119);
	e5= (c!='p')||((i+f++)<=10);
	z= 2*((i1%5)*(4+(j-3)/(k+2)));
	printf("Value of E1 = %.2f\n",e1);
	if(e2==1)
	printf("E2 is True\n");
	else
	printf("E2 is False\n");
	if(e5==1)
	printf("E5 is True\n");
	else
	printf("E5 is False\n");
	printf("Value of Z = %.2f\n",z);
	

}
