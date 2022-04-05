#include"graphvar.h"
#include"graphfunc.h"

int main()
{ 
char c,ch,v[S];
system("color 3");
start();
int i;

   do
   {
	printf("\n\n MENU");
	printf("\n 1.To Enter Vertices");
	printf("\n 2.To Enter Edges");
	printf("\n 3.To Display Adjacency Matrix");
	printf("\n 4.To Perform BFS");
	printf("\n 5.To Perform DFS");
	printf("\n 6.To Exit");
	printf("\n Your Choice : ");
	fflush(stdin); 
	c = getchar();
	
		switch(c)
		{
			case '1' :
			//	system("cls");
				system("color 3");
				start();
			
				dot1 :
				printf("\n\n Enter No. of Cities : ");
				scanf("%d",&n);
				if(n<=0)
				{
					printf("\n Invalid Input!!\n Number of Cities should be greater than Zero.");
					goto dot1;
				}//if
				system("color a");
			//	system("cls");
			    start();
			    printf("\n\t\t\t..................................INPUT.....................................\n\n");
				
				//city = (char*)malloc(n*sizeof(char));
				
				for(i=0;i<n;i++)
				{
					fflush(stdin);
					printf(" Enter Name of City %d : ",(i+1));
					gets(city[i]);
				}
				
				break;
			case '2' :
				//system("cls");
				system("color 3");
				start();
				edge();
				break;
				
			case '3' :
				system("color a");
			//	system("cls");
			    start();
				adjmatrix();
				break;
			case '4' :
				system("color a");
			//	system("cls");
			    start();
			    
			   		for (i=0;i<n;i++)                   // mark all the vertices as not visited
				    	visit[i]=0;
				    
				    printf("\n Enter the Starting Vertex : ");
				    fflush(stdin);
				    gets(v);
				    
				    	for(i=0;i<n;i++)
				       		if(stricmp(v,city[i])==0)
				       		break;
				    
				    f=r=0;
				    q[r]=i;
				    printf("\nBFS TRAVERSAL\n");
				    visit[i]=1;                                     // mark the starting vertex as visited
				    puts(v);
				   
				    bfs(i);
				    if(r != n-1)
				        printf("\n BFS NOT POSSIBLE");
				break;
			case '5' :
			//	system("cls");
				system("color 3");
				start();
				
					for (i=0;i<n;i++)                   // mark all the vertices as not visited
					 visit[i]=0;
						    
				    printf("\n Enter the Starting Vertex : ");
				    fflush(stdin);
				    gets(v);
				    
				    for(i=0;i<n;i++)
				       		if(stricmp(v,city[i])==0)
				       		break;
				    
				    printf("\nDFS TRAVERSAL\n");
				    visit[i]=1; // mark the starting vertex as visited
				    puts(v);
				    
				    dfs(i);
				break;
			case '6' :
				system("color 3");
				break;
			default : 
		//	system("cls");
			start();
			system("color 4");
			printf("\n Choose Among 1,2,3,4.\n");
		}//switch

  		 }while(c!='6');
   
printf("\n LAB 16 TASK COMPLETED!!");
return 0;
}


