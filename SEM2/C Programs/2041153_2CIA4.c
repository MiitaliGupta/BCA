#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>
#define S 20

struct JOB 
{
	int id; //job id
	int st; //start time
	int et; //end time
	int wt; //wait time
   struct JOB *next;
   
   struct JOB *lc;
   struct JOB *rc;
   
}*temp;typedef struct JOB job;
int f;
job *root = NULL;

void start()
{
	printf("\n");
	printf("\t\t\t\t\t\t JOB QUEUE\n");
	printf("________________________________________________________________________________________________________________________\n");	
}//start

int isfull(int rear,int size)
{
  if( (rear+1) == size)
  return 1;
  else 
  return 0;
}

int isempty(int front,int rear)
{
  if(front>=rear)
  return 1;
  else 
  return 0;
}

void createnode()
{
	
	temp = (job*) malloc(sizeof(job));
		  temp->id = rand() % (10000+1-1000)+1000;//job id
		  temp->st = rand() % (100+1-0)+0;//start time;
		  do
		  {
		  temp->et = rand() % (500+1-1)+1;//end time
		  }while(temp->et <= temp->st );
		  
		  temp->wt =temp->et - temp->st; //wait time
		  temp->next=NULL;
	
}//node creation

void enqueue(job **head,int *rear,int *front,int size)
{	
	job *j,*k;
	if(isfull(*rear,size)==1)
	{
	system("cls");
    start();
	printf("\nQUEUE IS FULL.\nNO MORE JOBS CAN ENTER THE QUEUE\n");
	system("color 4");
	}
	else if(isempty(*front,*rear)==1)
	{
		*rear+=1;
		createnode();
		*head = temp;
		
		system("color a");
		system("cls");
		start();
		
		printf("\nNEW PROCESS DATA ENQUEUED INTO THE QUEUE\n");
		printf("\nJOB ID	    : %d",temp->id);
		printf("\nSTART TIME    : %d",temp->st);
		printf("\nEND TIME      : %d",temp->et);
		printf("\nWAIT TIME     : %d\n",temp->wt);
		
	}
	else
	{	 
		*rear+=1; 
		createnode();
		
		for(j=*head;j!=NULL;j=j->next)
		k=j;
		
		
		k->next = temp;
		  
		system("color a");
		system("cls");
		start();	
		
		printf("\nNEW PROCESS DATA ENQUEUED INTO THE QUEUE\n");
		printf("\nJOB ID	    : %d",temp->id);
		printf("\nSTART TIME    : %d",temp->st);
		printf("\nEND TIME      : %d",temp->et);
		printf("\nWAIT TIME     : %d\n",temp->wt);
		
	}
	
}

void dequeue(job **head,int *rear,int *front,int size)
{
if(isempty(*front,*rear)==1)
	{
	*front+=1;
	system("cls");
    start();
	printf("\nQUEUE IS EMPTY.\nNO JOB IN QUEUE\n");
	system("color 4");
	
	}
	else
	{	
		*front+=1;
		temp= *head;
		*head = temp->next;
	}	
}

void printq(job *head,int front,int rear)
{
	job *j;
	if(isempty(front,rear)==1)
	printf("\nQUEUE IS EMPTY.\nNO JOB IN THE QUEUE\n");
	else
	{
	printf("\n\nTHE QUEUE :\n");
	for(j=head;j!=NULL;j=j->next)
	 {
	 	
		printf("\nJOB ID	    : %d",j->id);
		printf("\nSTART TIME    : %d",j->st);
		printf("\nEND TIME      : %d",j->et);
		printf("\nWAIT TIME     : %d\n",j->wt);
			
	}
	}
}

void bstinsert() 
{
    job* t = (job*) malloc(sizeof(job));
    job *current;
    job *parent;
    	
   		t = temp;
    	t->lc = NULL;
   		t->rc = NULL;
   		
   		if(root == NULL)
    	  root = t; 
    	else 
		{
    	  current = root;
    	  parent = NULL;

      		while(1) 
	  		{ 
        		parent = current;
         
        		 //going to lc of the tree
        		if(t->id < parent->id) 
				{
        		current = current->lc;                
            
            	//inserting to the lc
        		    if(current == NULL) 
					{
            		   parent->lc = t;
            		   return;
            		}
        		}  
				
				//going to rc of the tree
        		else 
				{
        	    	current = current->rc;

        	    	//inserting to the rc
        	    	if(current == NULL)
					 {
        	    	   parent->rc = t;
        	    	   return;
        			}
        		}
        	}
        }
                
}

void post(job *root)  
{
   if(root != NULL) 
   { f++;
      post(root->lc);
      post(root->rc);
     	printf("\nJOB ID        : %d ",root->id);
		printf("\nSTART TIME    : %d",root->st);
		printf("\nEND TIME      : %d",root->et);
		printf("\nWAIT TIME     : %d\n",root->wt);
   }
   if(f==0)
   printf("\nTREE IS EMPTY\n");
}

int search(job* root, int x){
   job *current = root;
   if(current == NULL)
   {
   printf("\nTREE IS EMPTY\n");
   return 0;
   }
   {	
   while(current->id != x)
   {
	
      if(current != NULL) 
	  {
      	
         //go to left tree
         if(current->id > x)
		 {
            current = current->lc;
         }  //else go to right tree
         else {                
            current = current->rc;
         }
			
         //not found
         if(current == NULL)
		 {
            printf("\nJOB ID NOT FOUND\n");
            return 0;
         }
      }	//if		
   }//while
   
    printf("\nJOB ID FOUND\n");
    printf("\nJOB ID        : %d ",current->id);
	printf("\nSTART TIME    : %d",current->st);
	printf("\nEND TIME      : %d",current->et);
	printf("\nWAIT TIME     : %d\n",current->wt);
}
}

int main()
{ 
char c;
int size,front,rear;
int x,i;
system("color 3");
start();
front=-1;
rear=-1;
job *head = (job*)malloc(sizeof(job));

   do
   {
   	
	printf("\n\nMENU");
	printf("\n0.TO SET LIMIT TO NUMBER OF JOBS IN QUEUE");
	printf("\n1.TO CREATE JOB LIST");
	printf("\n2.TO DEQUEUE JOB FROM THE LIST");
	printf("\n3.TO SEARCH JOB ID USING BST");
	printf("\n4.TO DISPLAY POST ORDER TRAVERSAL OF JOB ID ");
	printf("\n5.TO DISPLAY ENTIRE JOB QUEUE");
	printf("\n6.To Exit");
	printf("\nYour Choice : ");
	fflush(stdin);
	c = getchar();
	
		switch(c)
		{
			case '0' :
				dot1 :
				printf("\n\nEnter Maximum No. of Jobs that can be in Queue : ");
				scanf("%d",&x);
				if(x<=0)
				{
					system("color 4");
					printf("\nInvalid Input!!\nNumber of Jobs should be greater than Zero.");
					goto dot1;
				}//if
				size=x;
				system("color a");
				system("cls");
			    start();
			    
				printf("QUEUE LIMIT SET TO %d\n",size);
				
				break;
			case '1' :
				front=-1;
				rear=-1;
				dot2:
				printf("\n\nEnter  No. of Jobs to be Entered in Queue : ");
				scanf("%d",&x);
				if(x<=0 || x>=size)
				{
					system("color 4");
					printf("\nInvalid Input!!\nNumber of Jobs should be greater than Zero and Lesser than Max Queue limit(%d)",size);
					goto dot2;
				}//if
				
				for(i=0;i<x;i++)
				{
					enqueue(&head,&rear,&front,size);
					bstinsert();
					printq(head,front,rear);
					sleep(2);
				}
				
				break;
			case '2' :
				dequeue(&head,&rear,&front,size);
				
				if(front<=rear)
				{
					
				system("color a");
				system("cls");
			    start();
					printf("\nPROCESS DATA DEQUEUED FROM QUEUE : \n");
					printf("\nJOB ID	    : %d",temp->id);
					printf("\nSTART TIME    : %d",temp->st);
					printf("\nEND TIME      : %d",temp->et);
					printf("\nWAIT TIME     : %d\n",temp->wt);
				
					printq(head,front,rear);
		 		
				}
				
				break;
			case '3' :
				system("color a");
				system("cls");
			    start();
				printf("\n\nEnter Job Id to be Searched : ");
				scanf("%d",&x);
				search(root,x);
				break;
			case '4' :
				system("color a");
				system("cls");
			    start();
				printf("\nPOST ORDER TRAVERSAL\n");
				f=0;
				post(root) ;
				break;
			case '5' :
				system("color a");
				system("cls");
			    start();
				printq(head,front,rear);
				break;
			case '6' :
				system("color 3");
				break;
			default : 
			system("cls");
			start();
			system("color 4");
			printf("\nChoose Among 1,2,3,4,5,6.\n");
		}//switch

  		 }while(c!='6');
   
printf("\nCIA 4 TASK COMPLETED!!");
return 0;
}


