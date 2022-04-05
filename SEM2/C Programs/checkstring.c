 //to see how string works in c
 #include <stdio.h>
 #include <stdlib.h>
 //int getchar(void);
int main (void)
{ 
char a[50]="Game of Thrones";	// eg 1.
	printf("1. %s\n",a);
	
	
char b[50]={'G','a','m','e',' ','o','f',' ','T','h','r','o','n','e','s','\0', ' ', 'a'};//why do we use \0 even though its making no diff in the output.Is it only for ourselves to check the end as in case of counting string length
	
	printf("2. %s\n",b);  // We use it cuz it tells the compiler to stop inputting the values in str b after '\' is encountered.
					// for eg, even after you put a space and 'a' after '\0', you still will have GOT printed.
								
	
char c [50] [50]={"Game","of","Thrones"};//why does string doesnt works with single dimension array but only with 2D array 
int i,j;printf("3. ");  // the first example above (eg 1.) is using 1D array. So, str works with any dimension of arrays.
for(i=0;i<3;i++)
{
//printf("\n");
//for(j=0;j<10;j++)
	printf("%s ",c[i]);
}
printf("\n");


char d[3] [8]={{'G','a','m','e','\0'},{'o','f','\0'},{'T','h','r','o','n','e','s','\0'}};
printf("4. ");
for(i=0;i<3;i++)
{
//printf("\n");
//for(j=0;j<10;j++)
	printf("%s ",d[i]);//why does each string saves in all columns(j) of a row(i) and new string is saved only in new row

}  // cuz we're using a 2D array here. More info via audio.


printf("\n");

char e[50];
printf("Enter a String : ");
scanf("%[^\n]",e);//why does this works for entering strings with spaces
 
 // this is makes the user enter the input until they press enter.
 
 // references -
 // https://www.geeksforgeeks.org/scanfns-str-vs-getsstr-in-c-with-examples/
 // https://stackoverflow.com/questions/40038538/how-does-scanf-n-str-work-in-c-programming
 // https://www.geeksforgeeks.org/scansets-in-c/



getchar();// how and why to use this

//printf("\nEnter a num: %d", getchar());

/* 

// try running this in another .c file
int main()
{
	fflush(stdin);
	printf("Enter a num: %d", getchar());  // it accepts only 1 thing as input
	//the above line prints the input as the input's ASCII value
	
	
	fflush(stdin);
	printf("Enter a num: %c", getchar());  // this will output the input just as it is.
	
	return 0;
	}
 */


printf("5. %s\n",e);	

printf("Enter a String : ");
scanf("%[^\n]s", e);//why not to use '&' when it is not making any difference during input

// i won't be able to answer this as its prerequisite concept is "pointers". 
// after you know this concept, you'll know why we don't need "&".

// try going thru this tho --> https://www.geeksforgeeks.org/not-used-strings-scanf-function/
printf("6. %s\n",e);	

	
return(0);	
}
