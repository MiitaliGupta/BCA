//C LAB TEST 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
	int id,year;
	char bn[1000],an[1000];
	float price;
};
void read( struct book s[],int n);
void show( struct book s[],int n);
void cyear( struct book s[],int n);
void author( struct book s[],int n);
int same(char a[],char b[]);
int main(void)
{
	char c,f;
int n;
printf("The Following Program is the Implementation of C LAB CIA 3 \n\n");

   do
   {
	
	printf("\nFor how many Books details are to be stored : ");
	scanf("%d",&n);
	struct book b[n];
	read(b,n);
	printf("\n\nTo Search books having same Author Press A\n");
	printf("To Change Price of Book acc to year Press B\n");
    printf("Your Choice : ");
    fflush(stdin);
    scanf("%c",&c);
     printf("\n");
     if(isalpha(c))
    {
    switch(c)
    {
      case 'a':
      case 'A':
      	author(b,n);
      	show(b,n);
      	break;
      case 'b':
      case 'B':
      	cyear(b,n);
      	show(b,n);
      	break;
      default:
      	printf("Invalid Input.\nChoose from A or B");
      	
    }
    }
    else
    printf("Invalid Input.\nEnter a valid Aphlabet");
    printf("\n\n");
fflush(stdin);
printf("If You want to Check Again press 1\nOtherwise press any key\nYour choice : ");
scanf("%c",&f);	
}while(f=='1');


printf("\nTEST 3 Task Complete");
return(0);	
}

void read( struct book s[],int n)
{int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter Details of Book %d\n",(i+1));
		printf("\nEnter Book id : ");
		scanf("%d",&s[i].id);
		fflush(stdin);
		printf("Enter Book Name : ");
		gets(s[i].bn);
		fflush(stdin);
		printf("Enter Author's name : ");
		gets(s[i].an);
		printf("Enter Price of Book : ");
		scanf("%f",&s[i].price);
		printf("Enter Year of Publication : ");
		scanf("%d",&s[i].year);
	    printf("\n\n");
    }
}
void show( struct book s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nDetails of Book %d\n",(i+1));
		printf("\nBook id : %d\n",s[i].id);
		printf("Book Name : ");
		puts(s[i].bn);
		printf("Author's name : ");
		puts(s[i].an);
		printf("Book Price : %.2f\n",s[i].price);
		printf("Year of Publication : %d\n",s[i].year);
		printf("\n\n");
    }
}
void cyear( struct book s[],int n)
{ int i;
	for(i=0;i<n;i++)
	{ if(s[i].year>=2015)
	   s[i].price += 0.15 * s[i].price;
	   
	   else if(s[i].year>=2010 && s[i].year<2015)
	   s[i].price += 0.12 * s[i].price;
	   
	    else if(s[i].year>=2005 && s[i].year<2010)
	   s[i].price += 0.09 * s[i].price;
	   
	    else if(s[i].year<2005)
	   s[i].price -= 0.02 * s[i].price;
	}
}
void author( struct book s[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	   { if( (i!=j) && ( same(s[i].an,s[j].an)==1 ) )
	   printf("Author of %s and %s is %s",s[i].bn,s[j].bn,s[i].an);
       }
       printf("\n");
    }
}
int same(char a[],char b[])
{
	int i,f=1,x=strlen(a),y=strlen(b);
	if(x==y)
	{
	for(i=0;i<x;i++)
	{
		if(a[i]==b[i])
		f=1;
		else
		{f=0;
		break;
		}
	}
	}
	else
	f=0;
	return f;
}
