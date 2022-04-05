#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
#define M 1000000007

int n,k;
char *s;
long a;

int pal(char x[],char y[])
{
    
     if(strcmp(x,y)==0)
     return 1;
     else 
     return 0;
    
    
}

/*char *randstring(int length) 
{    
    static int mySeed = 25011984;
    char *string = "abcdefghijklmnopqrstuvwxyz";
    size_t stringLen = strlen(string);        
    char *randomString = NULL;

    srand(time(NULL) * length + ++mySeed);

    if (length < 1) {
        length = 1;
    }

    randomString = malloc(sizeof(char) * (length +1));

    if (randomString) 
	{
        short key = 0;

        for (int n = 0;n < length;n++) {            
            key = rand() % stringLen;          
            randomString[n] = string[key];
        }

        randomString[length] = '\0';

        return randomString;        
    }
}*/

  
/* The main function that recursively prints all repeated 
   permutations of  the given string. It uses data[] to store all
   permutations one by one */
void allLexicographicRecur (char *str, char* data, int last, int index)
{
    int i, len = strlen(str);
  
    // One by one fix all characters at the given index and recur for 
    // the/ subsequent indexes
    for ( i=0; i<len; i++ )
    {
        // Fix the ith character at index and if this is not the last 
        // index then recursively call for higher indexes
        data[index] = str[i] ;
  
        // If this is the last index then print the string stored in
        // data[]
        if (index == last)
            {
            	if(strcmp(data,s)<0 && pal(data,s)==1)
					a++;
			}
        else // Recur for higher indexes
            allLexicographicRecur (str, data, last, index+1);
    }
}
  
/* This function sorts input string, allocate memory for data (needed 
   for allLexicographicRecur()) and calls allLexicographicRecur() for
   printing all  permutations */
void allLexicographic(char *str)
{
    int len = strlen (str) ;
  
    // Create a temp array that will be used by allLexicographicRecur()
    char *data = (char *) malloc (sizeof(char) * (len + 1)) ;
    data[len] = '\0';
  
    // Now print all permutaions
    allLexicographicRecur (str, data, len-1, 0);
  
    // Free data to avoid memory leak
    free(data);
}

int main()
{
    int i,t;
    scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
         scanf("%d %d",&n,&k);  
         scanf("%s",s);
         //printf("Input is corrrect %d\n",i);
         allLexicographic(s);
         printf("Case #%d: %d",i,(a%M));
        }//no. of test cases
    return 0;
}





