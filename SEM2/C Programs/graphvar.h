#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define S 20
 
struct edge
{
	char sc[S][S]; //source city
	char dc[S][S]; //destination city	
}e[S];typedef struct edge ed;

char city[S][S],q[S];
int n;//vertices
int m;//edges
int adj[S][S];//adjacency matrix
int visit[S],f=-1,r=-1;




void start()
{
	printf("\n");
	printf("\t\t\t\t\t\t\tGRAPHS\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start
