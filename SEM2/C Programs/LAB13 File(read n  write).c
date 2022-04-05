//LAB13
//FILE Reading and Writing
//File Opening modes : r,w,a,r+,w+,a+
//Writing modes : putc(),putw(),fprintf(),fputs()
//Reading modes : getc(),getw(),fscanf(),fgets()
#include <stdio.h>
#include <stdlib.h>
main()
{   
	FILE *ptr;
	char f[100], c[1000],ch; 
	printf("The following Program Demonstrates Reading and Writing in a File\n"); 
	do
	{
    fflush(stdin); 
    printf("\nEnter the Filename to open for Reading and Writing\n"); 
    gets(f); 
    // Open one file for reading and writing
    ptr = fopen(f, "r+"); //filename is a variable
    if (ptr == NULL) 
    { 
        printf("Cannot open file %s \nThe File might not Exist", f); 
        exit(0); 
    }
	fflush(stdin); 
    printf("\nEnter the Data Into the file : "); 
    gets(c);
    fputs(c, ptr);
    fprintf(ptr," ");
    rewind(ptr);//pointer points to the begining
 printf("----------------------------------------------------DATA IN THE FILE----------------------------------------------------\n"); 
    do
    {
    ch = getc(ptr);
	putchar(ch);
	}while (ch!= EOF); //while(!feof(ptr));
	
    fclose(ptr);
   
printf("\n\nDo You Want to Clear the Data in the File??\nPress 1 for YES\nPress any key for NO\nYour Choice : ");
fflush(stdin);
ch=getchar();
if(ch=='1')
{
ptr = fopen(f, "w"); 
fclose(ptr);
printf("File Data is Cleared");	
}
    
    
printf("\n\nDo You Want to Try Again??\nPress 1 for YES\nPress any key for NO\nYour Choice : ");
fflush(stdin);
ch=getchar();
}while(ch=='1');
printf("\n\nLAB--13 Task Complete.");
	getch();

}
