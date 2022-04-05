#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
struct car
{
	int engine,model;
	char color[100];
	float base,total;
};
void input( struct car s[],int n);
void show( struct car s[],int n);
void count( struct car s[],int n);
void cal( struct car s[],int n);
int colorcheck(char a[]);
main()
{
	int n;
	char ch,f;
	printf("The Following Program is the Implementation of C LAB CIA 4 \n\n");

   do
   {
	
	printf("\nFor how many Cars Details are to be stored : ");
	scanf("%d",&n);
	struct car c[n];
	input(c,n);
	printf("\n\nTo Search No. of Cars having same Model no. Press A\n");
	printf("To Calculate the Price of Car acc to its color Press B\n");
    printf("Your Choice : ");
    fflush(stdin);
    scanf("%c",&ch);
     printf("\n");
     if(isalpha(ch))
    {
    switch(ch)
    {
      case 'a':
      case 'A':
      	show(c,n);
      	count(c,n);
      	break;
      case 'b':
      case 'B':
      	cal(c,n);
      
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


printf("\nTEST 4 Task Complete");
	
}

void input( struct car s[],int n)
{int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter Details of Car %d\n",(i+1));
		printf("\nEnter Engine No. : ");
		scanf("%d",&s[i].engine);
		printf("Enter Model No. : ");
		scanf("%d",&s[i].model);
		fflush(stdin);
		printf("Enter Car Color : ");
		gets(s[i].color);
		printf("Enter Base Price : ");
		scanf("%f",&s[i].base);
	    printf("\n\n");
    }
}

void show( struct car s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nDetails of Car %d\n",(i+1));
		printf("\nEngine No. : %d\n",s[i].engine);
		printf("Model No. : %d\n",s[i].model);
		printf("Color : ");
		puts(s[i].color);
		printf("Base Price : %.2f\n",s[i].base);
		printf("\n\n");
    }
}

void count( struct car s[],int n)
{
	int i,c=0,x;
	printf("Model of which Car do you need to Compare : ");
	scanf("%d",&x);
	x=x-1;
	for(i=0;i<n;i++)
	{
	if( (i!=x) && ( s[i].model==s[x].model) )
	   c++;
    }
    printf("%d Car(s) have Same Model No. as Car %d",c,(x+1));
    printf("\n");
}
void cal( struct car s[],int n)
{
	int i,x;
	for(i=0;i<n;i++)
	{   printf("\nDetails of Car %d\n",(i+1));
		printf("\nEngine No. : %d\n",s[i].engine);
		printf("Model No. : %d\n",s[i].model);
		printf("Color : ");
		puts(s[i].color);
		printf("Base Price : %.2f\n",s[i].base);
		
		x=colorcheck(s[i].color);
		
	         if(x==1)//s[i].color=="RED"  
	         {
			    s[i].total=s[i].base+(0.12*s[i].base);
	          	printf("Total Price : %.2f\n",s[i].total);
	         }
		else if(x==2)//s[i].color=="BLUE"  
		     {
			    s[i].total=s[i].base+(0.095*s[i].base);
	          	printf("Total Price : %.2f\n",s[i].total);
	         }
		else if(x==3)//s[i].color=="BLACK"
		     {
			    s[i].total=s[i].base+(0.02*s[i].base);
	          	printf("Total Price : %.2f\n",s[i].total);
	         }
	    else if(x==4)//s[i].color=="WHITE"
		     {
			    s[i].total=s[i].base+(0.02*s[i].base);
	          	printf("Total Price : %.2f\n",s[i].total);
	         }
		else
		printf("Car of this Color Not in Stock Therefore Total Price Connot be Calculated");
		printf("\n\n");
	}
}
int colorcheck(char a[])
{
	int i,k=0,l=strlen(a)-1;
	 if(a[0]=='R'||a[0]=='r')
	 k=1;
	 if( (a[0]=='B'||a[0]=='b') && (a[l]=='E'||a[l]=='e') )
	 k=2;
	 if( (a[0]=='B'||a[0]=='b') && (a[l]=='K'||a[l]=='k') )
	 k=3;
	 if(a[0]=='W'||a[0]=='w')
	 k=4;
	 return k;
}

