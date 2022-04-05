//DS lAB1
#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>


int n1,n2,n3,x1,x2,x3;

void input(int a[],float f[],char ch[]);
void display(int a[],float f[],char ch[]);
void insint(int a[]);
void insfloat(float f[]);
void inschar(char ch[]);

int main()
{
 	
 	char c;
 	
 	printf("The Following Program Performs Insertion into Different Arrays\n");
 	
 	printf("\nEnter number of Elements in Integer Array : ");
 	scanf("%d",&n1);
 	x1=n1+50;
 	int a[x1];
 	
 	printf("\nEnter number of Elements in Float Array : ");
 	scanf("%d",&n2);
 	x2=n2+50;
 	float f[x2];
 	
 	printf("\nEnter number of Elements in Character Array : ");
 	scanf("%d",&n3);
 	x3=n3+50;
 	char ch[x3];
 	
do
{ 		
	printf("\nTo Enter Data in any Array Press 1\n");	
	printf("To Insert Data in Integer Array Press 2\n");
	printf("To Insert Data in Float Array Press 3\n");
	printf("To Insert Data in Character Array Press 4\n");
	printf("To Display any Array Press 5\nTo Exit Press 6\n\nYour Choice : ");
	fflush(stdin);
	 c=getchar();
		if(!isdigit(c))
			printf("Enter a Digit.");
		else
		{
			switch(c)
			{
				case '1':
					input(a,f,ch);
				     break;
				case '2':
					insint(a);
					break;
				case '3':
					insfloat(f);
					break;
				case '4':
					inschar(ch);
				    break;
				case '5':
					display(a,f,ch);
				    break;
				case '6':
				    break;
				default :
					printf("Choose Between 1,2,3,4,5,6.\n");
			}//switch
		}//else
}while(c!='6');
printf("\nLAB--1 TASK COMPLETE.");		
 	
return 0;
}//main


void input(int a[],float f[],char ch[])
 {
	 int i;
	 char c;
	 do
	 {
		printf("\nTo Enter data in Integer Array Press 1\n");
		printf("To Enter data in Float Array Press 2\n");
		printf("To Enter data in Character Array Press 3\nTo Exit Press 4\n\nYour Choice : ");
		fflush(stdin);
		c=getchar();
			if(!isdigit(c))
			printf("\nEnter a Digit.");
			else
			{
				switch(c)
				{
					case '1':
						printf("\nEnter Data in Integer Array\n");
						 for(i=0;i<n1;i++)
						 scanf("%d",&a[i]);
					     break;
					case '2':
						printf("\nEnter Data in Float Array\n");
						for(i=0;i<n2;i++)
						 scanf("%f",&f[i]);
					    break;
					case '3':
						printf("\nEnter Data in Character Array\n");
						for(i=0;i<n3;i++)
						{
						fflush(stdin);
						ch[i]=getchar();
					    }
					    break;
					case '4':
					    break;
					default :
						printf("Choose Between 1,2,3,4.\n");
				
				  	
				}//switch
			}//else
	}while(c!= '4');
}//input

void display(int a[],float f[],char ch[])
{
int i;
char c;
 do
 {
	printf("\n\nTo Display data in Integer Array Press 1\n");
	printf("To Display data in Float Array Press 2\n");
	printf("To Display data in Character Array Press 3\nTo Exit Press 4\n\nYour Choice : ");
	fflush(stdin);
	c=getchar();
		if(!isdigit(c))
			printf("\nEnter a Digit.");
		else
		{
			switch(c)
			{
			case '1':
				printf("\nData in Integer Array : ");
				 for(i=0;i<n1;i++)
				 printf("%d ",a[i]);
			     break;
			case '2':
				printf("\nData in Float Array :  ");
				for(i=0;i<n2;i++)
				printf("%.2f  ",f[i]);
			    break;
			case '3':
				printf("\nData in Character Array : ");
				for(i=0;i<n3;i++)
				 printf("%c ",ch[i]);
			    break;
			case '4':
			    break;
			default :
				printf("\nChoose Between 1,2,3,4.\n");
			
			  	
			}//switch
		}//else
}while(c!= '4');
}//display

void insint(int a[])
{  int p=0,m=0,y=0;
	printf("\nAt which position do you want to insert a New Element : ");
	scanf("%d",&p);
	m=n1;
	n1+=1;
		if( (n1>=x1) || (p>n1||p<1) )
			printf("\nEither the Array is full or Position Entered was Beyond Array Size.\nTherefore, No New Element can be entered in this Array.\n");
		else
		{	p-=1;
			printf("Enter the New Element : ");
			fflush(stdin);
			scanf("%d",&y);
				while(m>=p)
				{
					a[m+1] = a[m] ;
					m=m-1;
				}//while
		    a[p] = y;
			printf("\nNew Element Inserted !!\nPrint the Array to Check it.\n");	
	    }//else
	
	
	
}//insert integer

void insfloat(float f[])
{
 int p=0,m=0;
 float y=0.0;
 printf("\nAt which position do you want to insert a New Element : ");
 scanf("%d",&p);
 m=n2;
 n2+=1;
	if( (n2>=x2) || (p>n2||p<1) )
		printf("\nEither the Array is full or Position Entered was Beyond Array Size.\nTherefore, No New Element can be entered in this Array.\n");
	else
	{	p-=1;
		printf("Enter the New Element : ");
		scanf("%f",&y);
	
		while(m>=p)
		{
			f[m+1] = f[m] ;
			m=m-1;
		}//while
   		 f[p] = y;
		printf("\nNew Element Inserted !!\nPrint the Array to Check it.\n");	
    }//else
	
		
}//insert float

void inschar(char ch[])
{
	int p=0,m=0;
    char y;
	printf("\nAt which position do you want to insert a New Element : ");
	scanf("%d",&p);
	m=n3;
	n3+=1;
		if( (n3>=x3) || (p>n3||p<1) )
			printf("\nEither the Array is full or Position Entered was Beyond Array Size.\nTherefore, No New Element can be entered in this Array.\n");
		else
		{	p-=1;
			printf("Enter the New Element : ");
			fflush(stdin);
			scanf("%c",&y);
		
			while(m>=p)
			{
				ch[m+1] = ch[m] ;
				m=m-1;
			}//while
		    ch[p] = y;
			printf("\nNew Element Inserted !!\nPrint the Array to Check it.\n");	
	    }//else
	
	
}//insert character
