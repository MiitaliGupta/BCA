#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>
#define S 20

struct classrank 
{
  
   char n[S]; //name
	int r; //rank
	
   struct classrank *lc;
   struct classrank *rc;
};typedef struct classrank cl;
int f;
cl *root = NULL;

void start()
{
	printf("\n");
	printf("\t\t\t\t\t\t BINARY SEARCH TREE\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start
