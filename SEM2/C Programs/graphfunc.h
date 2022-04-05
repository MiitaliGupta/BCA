void edge()
{
	int i,j,flag;
	char ch;

			i=0;
				do
				{
					do
					{
					
					flag=0;
					printf("\n Enter Source of Edge: ");
					fflush(stdin);
					gets(e[i].sc);
					
					for(j=0;j<n;j++)
					{
					if(stricmp(e[i].sc,city[j])==0)
					{
						flag=1;
						break;
					}
					}
					if(flag==0)
					printf("\n Invalid Input\n Entered Vertex Not Present\n Enter Again\n");
					
					}while(flag==0);
					
					
					do
					{
					flag=0;
					printf("\n Enter Destination of Edge: ");
					fflush(stdin);
					gets(e[i].dc);
					
					for(j=0;j<n;j++)
					{if(stricmp(e[i].dc,city[j])==0)
					{
						flag=1;
						break;
					}
					}
					
					if(flag==0)
					printf("\n Invalid Input\n Entered Vertex Not Present\n Enter Again\n");
					
					}while(flag==0);
					
					m+=1;
					i+=1;
					//	system("cls");
						system("color 3");
						start();
		    		printf("\n Do you want to Add Edges\n Y: Yes\n N: No\n Your Choice : ");
		    		do
		    		{
		    			fflush(stdin);
		    			scanf("%c", &ch);
		    			if(ch != 'y' && ch != 'n' && ch != 'Y' && ch != 'N')
		    				printf("\n Invalid Input\n Enter 'Y' or 'N': ");
					}while(ch != 'y' && ch != 'n' && ch != 'Y' && ch != 'N');
					
				}while(ch == 'y' || ch == 'Y');
}

void adjmatrix( )
{
    int i,j,a,b;
	// Initialise all value to this Adjacency matrix to zero
    for ( i = 0; i < n ; i++) {
  
        for (j = 0; j < n ; j++) {
            adj[i][j] = 0;
        }
    }
  
    // Traverse the array of Edges
    for (i = 0; i < m; i++) 
	{ 
			for(a=0;a<n;a++)
       		if(stricmp(e[i].sc,city[a])==0)
       		break;
       		
       		for(b=0;b<n;b++)
       		if(stricmp(e[i].dc,city[b])==0)
       		break;
       // Update value to 1
        adj[a][b] = 1;
        adj[b][a] = 1;//not required in case of directed graph
    }
      
   
   //printing matrix
   printf("\n Adjecency Matrix :\n\n");
   for (i = 0; i < n ; i++) 
   	printf("\t%s",city[i]);
   	printf("\n\n");
   
    for (i = 0; i < n ; i++) 
   {	printf("%s\t",city[i]);
   		 for (j = 0; j < n ; j++) 
		printf("%d\t",adj[i][j]);
         printf("\n");
    }
        
}

void bfs(int v) 
{
       int i;
       for (i=0;i<n;i++)                                // check all the vertices in the graph
       {
               if(adj[v][i] != 0 && visit[i] == 0) // adjacent to v and not visited
              {
                       r=r+1;
                       q[r]=i;                       // insert them into queue
                       visit[i]=1;          // mark the vertex visited
                       puts(city[i]);
              }
      }
      f=f+1;                             // remove the vertex at front of the queue
      if(f<=r)                           // as long as there are elements in the queue
            bfs(q[f]);                  // peform bfs again on the vertex at front of the queue
}

void dfs(int v)
{
       int i;
       for (i=0;i<n;i++)                                // check all the vertices in the graph
       {
               if(adj[v][i] != 0 && visit[i] == 0) // adjacent to v and not visited
              {
                       visit[i]=1;
                       puts(city[i]);
                       dfs(i);
              }
      }
}
