/*LAB--7
DOUBLE DIMENSION ARRAY
*/
#include<stdio.h>
#include<stdlib.h>
void arithmetic();
void multi();
void transpose();
void rowncolumn();
 int main(void)
{   int f=1;
	printf("LAB 7\n\n");
	while(f==1)
{  	fflush(stdin);
	printf("To see Addition and Subtraction of 2-D Array press a\n");
	printf("To see Multiplication of 2-D Array press b\n");
	printf("To see Transpose of 2-D Array press c\n");
	printf("To see Row Total and Column Total of 2-D Array press d\n");
	printf("Your choice ");
	char ch;
	scanf("%c",&ch);
	if((ch>=97 && ch<=122)||(ch>=65 && ch<=90))
{
	
	switch(ch)
	{
		
	case 'a':
		arithmetic();
		break;
    case 'b':
    	multi();
		break;  
    case 'c':
	transpose();
		break;	
    case 'd':
    rowncolumn();
		break;
		default:
	printf("INVALID INPUT");
	break;
    }//switch ch
}
else
printf("Please enter a valid input");
fflush(stdin);
printf("\n\nDo you want to do it again?\nThen press 1 \nOtherwise press 0\n");
printf("Your choice ");
scanf("%d",&f);
printf("\n\n");

}//while f		
printf("\n\nLAB 7 Task Completed");
return(0);	
}//main

void arithmetic()
{	int n,i,j;
 printf("\nThe following computation for Adding and Subtracting two Double Dimension Arrays \n\n");
 printf("Enter Number of rows and columns : ");
 scanf("%d",&n);
   	int a[n][n];
   	int b[n][n];
   	printf("Enter all %d numbers for 1st array :\n",(n*n));
   	for(i=0;i<n;i++)
   	for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    
    printf("Enter all %d numbers for 2nd array :\n",(n*n));
   	for(i=0;i<n;i++)
   	for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
    
    printf("\n1st Matrix : \n");
    for(i=0;i<n;i++)
    {
   	for(j=0;j<n;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
     
	printf("\n2nd Matrix : \n");
    for(i=0;i<n;i++)
    {
   	for(j=0;j<n;j++)
        printf("%d\t",b[i][j]);
        printf("\n");
    }
    //addition 
    printf("\nSum of Matrices : \n");
    for(i=0;i<n;i++)
    {
   	for(j=0;j<n;j++)
        printf("%d\t",(a[i][j]+b[i][j]));
        printf("\n");
    }
    //subtraction
    printf("\nDifference between Matrices : \n");
    for(i=0;i<n;i++)
    {
   	for(j=0;j<n;j++)
        printf("%d\t",(b[i][j]-a[i][j]));
        printf("\n");
    }
}//arithmetic

void multi()
{
	int n,i,j,k;
 printf("\nThe following computation for Multiplying two Double Dimension Arrays \n\n");
 printf("Enter Number of rows and columns : ");
 scanf("%d",&n);
   	int a[n][n];
   	int b[n][n];
   	int mul[n][n];
   	printf("Enter all %d numbers for 1st array :\n",(n*n));
   	for(i=0;i<n;i++)
   	for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    
    printf("Enter all %d numbers for 2nd array :\n",(n*n));
   	for(i=0;i<n;i++)
   	for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
    
    printf("\n1st Matrix : \n");
    for(i=0;i<n;i++)
    {
   	for(j=0;j<n;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
     
	printf("\n2nd Matrix : \n");
    for(i=0;i<n;i++)
    {
   	for(j=0;j<n;j++)
        printf("%d\t",b[i][j]);
        printf("\n");
    }	
	
//Multiplication	
for(i=0;i<n;i++)    
{    
for(j=0;j<n;j++)    
{    
mul[i][j]=0;    
for(k=0;k<n;k++)//n=column range    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}

printf("\nProduct of Matrices : \n");
    for(i=0;i<n;i++)
    {
   	for(j=0;j<n;j++)
        printf("%d\t",mul[i][j]);
        printf("\n");
    }


    
}//multiplication
void transpose()
{
int n,i,j;
 printf("\nThe following computation for Transpose of a Double Dimension Array \n\n");
 printf("Enter Number of rows and columns : ");
 scanf("%d",&n);
   	int a[n][n];
   	printf("Enter all %d numbers for array :\n",(n*n));
   	for(i=0;i<n;i++)
   	for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    
    printf("\nEntered Matrix : \n");
    for(i=0;i<n;i++)
    {
   	for(j=0;j<n;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    //transpose
    printf("\nTransposed Matrix : \n");
    for(i=0;i<n;i++)
    {
   	for(j=0;j<n;j++)
        printf("%d\t",a[j][i]);
        printf("\n");
    }  
}//transpose  
void rowncolumn()
{
	int n,i,j;
 printf("\nThe following computation for Calculating Row and Column Sum of a Double Dimension Array \n\n");
 printf("Enter Number of rows and columns : ");
 scanf("%d",&n);
   	int a[n][n];
   	int r[n],c[n];
   	printf("Enter all %d numbers for array :\n",(n*n));
   	for(i=0;i<n;i++)
   	for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    
    printf("\nEntered Matrix : \n");
    for(i=0;i<n;i++)
    {  r[i]=0;
       c[i]=0;
   	for(j=0;j<n;j++)
        {
		printf("%d\t",a[i][j]);
		r[i]=r[i]+a[i][j];//sum of row
		c[i]=c[i]+a[j][i];//sum of column
	    }
        printf("\n");
    }
    
    
     printf("\nRow sum : \n");
    for(i=0;i<n;i++)
       {
	    printf("Sum of row %d is %d ",(i+1),r[i]);
        printf("\n");
       }
       
       
       printf("\nColumn sum : \n");
    for(j=0;j<n;j++)
       {
	    printf("Sum of Column %d is %d ",(j+1),c[j]);
        printf("\n");
       }
	
}//rowncolumn
