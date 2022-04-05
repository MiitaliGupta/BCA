//LAB--10
//Fibonacci series using Recursion
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int series(int n);
int isNumeric(char str[100]);

int main(void)
  {
char f,ch,s[100];
int a,x,n,i;

printf("The Following Program Computes Fibonacci Series using Recursion");

   do
   {
	printf("\n\nTo print the nth term of the Series press 1\n");
	printf("To print the complete Series till nth term press 2\n");
    printf("Your Choice : ");
    fflush(stdin);
    scanf("%c",&ch);
    if(isdigit(ch))
    {
    switch(ch)
    {
      case '1':
      { fflush(stdin);
	    printf("\n\nWhich term of the series do you want to print ?\nEnter your choice : ");
	    gets(s);
	    n=atoi(s);
	    x=isNumeric(s);
	    if(x==1)
        {
	    a = series(n);
      	printf("\nnth Term of the Series is : %d\n",a);
      	}//if
        else 
       printf("Invaid Input.\nPlease enter a numeric value.");
       break;
      }
      case '2':
      {	
       fflush(stdin);
	    printf("\n\nTill which term of the series do you want to print ?\nEnter your choice : ");
	    gets(s);
	    n=atoi(s);
	    x=isNumeric(s);
	    if(x==1)
        {
        printf("\nthe Series till nth term is : ");
        for(i=1;i<=n;i++)
        {
      	 a = series(i);
      	 printf("%d ",a);
        }
        }//if
        else 
       printf("Invaid Input.\nPlease enter a numeric value.");
        break;
      }
      default:
        printf("Invalid choice.\nChoose from 1 or 2");
    }//switch
    }//if
    else 
     printf("Invaid Input.\nPlease enter a digit.");
printf("\n\n");
fflush(stdin);
printf("If You want to Check Again press 1\nOtherwise press any key\nYour choice : ");
scanf("%c",&f);	
}while(f=='1');


printf("\nLAB--10 Task Complete");
return(0);	
   
   }
int series(int n)
{
	if(n==1)
	return(0);
	else if(n==2)
	return(1);
	else 
	return(series(n-1)+series(n-2));
}
int isNumeric(char str[100])
 {int i,f=1;
   for ( i = 0; i < strlen(str); i++)
      if (isdigit(str[i]))
	 f=1;
	   else
	  {
	  f = 0;
	  break;
      }
   return f;
}
