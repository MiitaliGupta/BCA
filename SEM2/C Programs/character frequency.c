//frequency of each character in a sentence
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{ 
char a[1000] ;
int i,j,n,c;

   printf("Enter any statement : ");
   gets(a);
   n = strlen(a);
   
   for(i=0;i<n;i++)
   {
    a[i]=tolower(a[i]);
	c=1; 
    if(a[i]!='\0')
    {
   	 for(j=i+1;j<n;j++)
   	 { a[j]=tolower(a[j]);
    	if(a[i]==a[j])
    	{
    		c++;
    		a[j]='\0';
		}
    	
     }
     
    printf("%c = %d\n",a[i],c);
    }
   } 
	return 0;

}
