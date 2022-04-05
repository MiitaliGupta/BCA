/*LAB--8
STRINGS
Made the Program without string.h Header file
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int slen(char a[]);
char * srev(char *,int n);
int scom(char a[], char d[] );
char * stoup(char a[],int n);
char * stolow(char a[],int n);
char * schange(char a[],int n) ;
void rspace();
int sicom(char a[], char d[] );

char s1[1000],s2[1000],b[1000];
int l,l1;


int main()
{  printf("LAB 8\n\n");
char f;	int x;
do
{

    fflush(stdin);
    printf("\nPlease Enter a String :  ");
  	gets(s1);
    l = slen(s1); //calling function for string length
    int i,k;
    	for (i = 0; i<l; i++)
     	{
  	    	if ( isalpha(s1[i]) || isspace(s1[i])) 
  	    	  k=1;
  	        else 
  	         {
			  k=0;  
			  break;
		     }
     	}
     	if(k==1)
    {
		
   	printf("\nTo check if the String is PALINDROME press a\n");
   	printf("To convert the String in UPPER CASE press b\n");
	printf("To convert the String in LOWER CASE press c\n");
	printf("To CHANGE CASE of the String press d\n");
	printf("To Compare String press ignoring cases e\n");
	
    fflush(stdin);
   	printf("Your Choice : ");
	char ch;
	ch=getch();
	putch(ch);
//	scanf("%c",&ch);
	if(isalpha(ch))
{
	
	switch(ch)
	{ 
	case 'A':
	case 'a':
         rspace;
	    if(scom(s2,srev(s2,l) ) == 1 )           //calling compare and reverse function   
		printf("Entered String is PALINDROME");                               
	    else
	    printf("\nEntered String is NOT PALINDROME");
	    break;
	
	case 'B':
	case 'b':
	    printf("\nEntered String in UPPER CASE : %s ",stoup(s1,l)); //calling function to change to upper case
	    break;
		
	case 'C':	    
	case 'c':
		 printf("\nEntered String in LOWER CASE : %s ",stolow(s1,l)); //calling function to change to lower case
	    break;  
		
	case 'D':	
	case 'd':
		printf("\nEntered String with CHANGED CASES : %s ",schange(s1,l)); //calling function to change to opposite case
	    break;
	    
	case 'E':	
	case 'e':
	    printf("\nPlease Enter a String to Compare from 1st one :  ");
    	gets(s2);
    	l1 = slen(s2); //calling function for string length
		 if(sicom(s1,s2) == 1 )           //calling icompare function   
		printf("Entered String are EQUAL");                               
	    else
	    printf("\nEntered String are NOT EQUAL");
	    break;    
		
		  	    
	default:
	printf("\n\aOh No...You Made A Wrong Choice!!\nNext Time Choose from a,b,c,d,e.\n");
	break;
    }//switch ch
}//if
else
printf("\n\aINVALID INPUT\nPLEASE ENTER AN ALPHABET FROM GIVEN OPTIONS.\n");
}
else 
printf("\n\aString Entered should ONLY contain ALPHABETS and SPACE\nDo NOT enter NUMBERS or ALPHANUMERIC CHARACTERS.\n ");

fflush(stdin);
printf("\n\nDo you want to do it again?\nThen press 1 \nOtherwise press any key\n");
printf("Your choice ");
scanf("%c",&f);
printf("\n\n");

}while(f=='1');//while f	

	
printf("\n\nLAB 8 Task Completed");  	
return 0;
}

//string lenght
int slen(char a[])
{
int len = 0,i=0;
while(a[i]!='\0')
{len++;
i++;
}
return len;
}


//string reverse
char * srev(char a[] ,int n)
{  
	int i,x;
    i=0;
	x=l-1;
	while(i<l)
	{
	  b[i]= a[x];
	 i++;
	 x--;	
	}
	b[i]='\0'; 
	printf("%s\n",b);
    return b;
    
}

//compare two strings
int scom(char a[], char d[] )
{
	int i=0,f=1;
	for(i=0; i<l; i++)
	{
        if(a[i]==d[i])
            f=1;
        else
		{
            f=0;
            break;
        }
    }


    return f;
}

//upper case
char * stoup(char a[],int n)
{
	 int i;
	for (i = 0;i<n; i++)
     	{
		    if( islower(a[i]) )
  			a[i] = a[i] -32;
  		}
  	return  a;
}

//lower case 
char * stolow(char a[],int n)
{
	int i;
	for (i = 0;i<n; i++)
     	{
     		if ( isupper(a[i]) )
		    a[i] = a[i] +32;
	    }
	return  a;
        }

// change case
char * schange(char a[],int n) 
{ int i;
	for (i = 0;i<n; i++)
     	{
		    if( islower(a[i]) )
  			a[i] = a[i] -32;
  			
	        else if ( isupper(a[i]) )
		    a[i] = a[i] +32;
		  
	    }  
	return  a;
  	          
}
 
//remove space
void rspace()
{  int i,x;
	i=0;
	x=l-1;
	while(i<l)
	{
	if(s1[x]!= ' ')
	 {
	  s2[i]= s1[x];
	 i++;
     }
	 x--;	
	}
	s2[i]='\0'; 
}
//comparing ignoring cases
int sicom(char a[], char d[] )
{ 
	int i=0,f=1,x;
stolow(a,l);
  stolow(d,l1);
    if(l>l1)
    x=l;
    else
    x=l1;
	for(i=0; i<x; i++)
	{
        if(a[i]==d[i])
            f=1;
        else
		{
            f=0;
            break;
        }
    }


    return f;	
}
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
