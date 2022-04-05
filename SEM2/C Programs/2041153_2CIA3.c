// LAB TEST 3
#include"2041153_2CIA3_DOMAIN.h"
void insert(bn *head,int * n);
void deletenode(bn *head,int* n);
void search(bn* head);

int main()
{ char c;
  bn *head,*temp,*i,*j,*nn;
  int n=1,x;
  start();
printf("\nEnter Data into the Database : \n");

head=createnode();
printf("\n\nDo you want to Enter one more book to Database ?\nPress 1 for Yes and Press 0 for No\nYour choice : ");
scanf("%d",&x);
while(x==1)
{   n++;
	nn= createnode();
	for(i=head;i!=NULL;i=i->next)
		j=i;
	j->next = nn;
	
	printf("\n\nDo you want to Enter one more book to Database ?\nPress 1 for Yes and Press 0 for No\nYour choice : ");
	scanf("%d",&x);
}
  
  system("cls");
  start();
   do
   {
	printf("\n\nMENU");
	printf("\n1.To Display the Data");
	printf("\n2.To Insert Data");
	printf("\n3.To Delete Data");
	printf("\n4.To Search Data");
	printf("\n5.To Exit");
	printf("\nYour Choice : ");
	fflush(stdin);
	c = getchar();
	
		switch(c)
		{
			case '1' :
				display(head);
				break;
			case '2' :
				insert(head,&n);
				break;
			case '3' :
				deletenode(head,&n);
				break;
			case '4' : 
				search(head);
				break;
			case '5' :
				system("color 3");
				break;
			default : 
			system("cls");
			start();
			system("color 4");
			printf("\nChoose Among 1,2,3,4,5.\n");
		}//switch

   }while(c!='5');
   
printf("\nCIA 3 TASK COMPLETED!!");
return 0;
}


//INSERTION
void insert(bn *head,int *n)
{
 system("cls");
start();
int x,p;
bn *h,*i,*j,*k;

	printf("Enter No. of Nodes you want to Insert : ");
	scanf("%d",&x);
	if(x>0)
	{
		printf("\n\nEnter Details of Book 1 :\n");
		h=createnode();
		input(h,&x);
	
		printf("\nEnter the Position where you want to insert the New Data : ");
		scanf("%d",&p);
		if(p==1) //for 1st position
		{
		*n=*n+x;
			  
		for(i=h;i!=NULL;i=i->next)
		j=i;
		
		j->next = head;
		head = h;
		
		printf("\nEntered Data Added to the List.Display Data to View the Changes.\n");
		}	
		
		else if(p>(*n+1)||p<=0)
			printf("\nPosition Entered is Invalid.Therefore, Data Cant be Entered At this Position.");
			
		else //for any other position
		{ *n=*n+x;
			i=head;
			for(x=1;x<p;x++)
			{   j=i;
		    	i=i->next;
		    }
			
			for(i=h;i!=NULL;i=i->next)
			k=i;
			
			k->next = j->next;
			j->next = h;
			printf("\nEntered Data Added to the List.Display Data to View the Changes.\n");	
		}//else
		display(head);
	}
	else
		printf("\nNo. of Nodes should be Greater than Zero");	
}

//DELETION
void deletenode(bn *head,int* n)
{
	system("cls");
	 start();
	 
	int flag=0,p,x=0,y;
	bn *i,*j,*k,*t;
   	printf("Enter the Book Id which is to be Deleted : ");
 	scanf("%d",&p);
 	
 for(i=head;i!=NULL;i=i->next)
	{x++;
	 j=i;
	 if(i->bid==p)
	 {flag =1;
	 	break;
	 }
	}
	if(flag==1) //for first position
	{
		if(x==1)
		{ 	j=head;
			head = head->next;
			free(j);
		}
	else //for rest other positions
	{
		i=head;
		for(y=1;y<x;y++)
		{   t=i;
	    	i=i->next;
	    }
		
		t->next = j->next;
		free(j);
	}
	*n-1;
 	 printf("\nDeleted Data From the List.Display Data to View the Changes.\n");
 	 display(head);
	}//flag if
	else
	printf("\nBook Id Not Found.");

}


//SEARCHING
void search(bn* head)
{	char sub[S],temp[S];
		int m,n,i,j,flag=0;
		bn *k;
	system("cls");
    system("cls");
    start();
    printf("Enter the Pattern you want to Search : ");
    fflush(stdin);
    gets(sub);
	
	m = strlen(sub); 
	for(k=head;k!=NULL;k=k->next)
	{ n = strlen(k->bt);
		strcpy(temp,k->bt);
	for (i = 0; i <= n-m; i++) 
	{ 
        for (j = 0; j < m; j++) 
            if (temp[i + j] != sub[j]) 
                {
				break;
				}
  
        if (j == m) 
        { flag++;
        if(flag==1)
        printf("\nBOOK TITLE(S) :");
		
        printf("\n%s ", temp); 
	    }
	}//ith loop
	}
	
	if(flag==0)
	printf("\n\nBook Title Not Found "); 
	
}




