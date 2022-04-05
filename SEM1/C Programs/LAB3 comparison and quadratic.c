//LAB--3
//largestest and second largest no. and quadratic equation
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	printf("LAB 3\n\n");
	int f = 1;
	while(f==1)
	{
	
	printf("To compute largest and 2nd largest no. press 1\n");
	printf("To compute roots of a quadiatric equation press 2\n");
	printf("Your choice ");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		{
		
	printf("\nThe following computation is for largest and 2nd largest number\n\n");
	printf("Enter any three numbers of your choice\n");
	int a,b,c;
	printf("1st number : ");
	scanf("%d",&a);
	printf("2nd number : ");
	scanf("%d",&b);
	printf("3rd number : ");
	scanf("%d",&c);
	if(a==b||b==c||c==a)
	printf("\nFew of the given inputs are equal therefore greatest and 2nd greatest cannot be determined.\n");
	else if(a>b && a>c)
	{
		printf("\n%d is greatest out of all three numbers.\n",a);
		if(b>c)
		printf("%d is the second largest number\n",b);
		else
		printf("%d is the second largest number\n",c);
	}
		else if(b>a && b>c)
	{
		printf("\n%d is greatest out of all three numbers.\n",b);
		if(a>c)
		printf("%d is the second largest number\n",a);
		else
		printf("%d is the second largest number\n",c);
	}
		else if(c>b && c>a)
	{
		printf("\n%d is greatest out of all three numbers.\n",c);
		if(b>a)
		printf("%d is the second largest number\n",b);
		else
		printf("%d is the second largest number\n",a);
	}
	break;
  }
case 2 :
{
		
	printf("\n\n The following computation is for Quadratic Equation roots \n\n");
	
	printf("Enter any three numbers for quadratic equation to be in the form ax^2 + bx + c \n");
	int x,y,z,d = 0;
	double r1=0.0f,r2=0.0f;
	printf("1st number : ");
	scanf("%d",&x);
	printf("2nd number : ");
	scanf("%d",&y);
	printf("3rd number : ");
	scanf("%d",&z);
	printf("\nthe Quadratic Equation entered is => %dx^2 + %dx + %d \n",x,y,z);
	
	d=(y*y)-4*x*z;
	printf("Discriminant for the given equation is = %d \n");
	
	if(d>0)
	{	printf("Since it is Greater than zero therefore it will have 2 REAL ROOTS and DISTINCT \n");
	 r1= (-y+ sqrt(d))/(double)(2*x);
     r2= (-y- sqrt(d))/(double)(2*x);
     printf("Root 1 = %.2lf\n",r1);
     printf("Root 2 = %.2lf\n",r2);
	}
   else	if(d == 0)
	{
	printf("Since it is Equal to zero therefore it will have 2 REAL ROOTs and EQUAL \n");
	r1= (-y- sqrt(d))/(double)(2*x);
	printf("Root  = %.2lf\n",r1);
   	}
   else	if(d<0)
   {	printf("Since it is Smaller than zero therefore it will have 0 REAL ROOTS only IMAGINARY ROOTS\n");
        printf("Therefore roots cannot be determined");
   }
   
   
   break;
}
   default : printf("invalid input");
	break;
}
printf("\n\nDo you want to choose again?\nThen press 1 \nOtherwise press 0\n");
printf("Your choice ");
scanf("%d",&f);
printf("\n\n");
}	
	
printf("LAB 3 Task Completed");	
	
}

