#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
struct cricketer
{
	char pname[30],tname[30];
	int runs, out;
	float bavg;
};
void start()
{
	printf("\t\t\t\t\tDATABASE FOR CRICKETERS DETAILS");
	printf("\n________________________________________________________________________________________________________________________");
}
void input(struct cricketer ctr[],int *n) //use 1 variable and other to take the pointer 
{
	system("cls");
	start();
	struct cricketer *ptr;
	ptr=ctr;
	int i;
	printf("\n\t\t..................................INPUT.....................................\n");
	for(i=0;i<*n;i++)
	{
		printf("\nEnter Data of Cricketer %d -->",i+1);
		printf("\nPlayer Name: ");
		fflush(stdin);
		scanf("%[^\n]",&ptr->pname);
		printf("Team Name: ");
		fflush(stdin);
		scanf("%[^\n]",&ptr->tname);
		printf("Runs Scored: ");
		scanf("%d",&ptr->runs);
		printf("No. of times got out: ");
		scanf("%d",&ptr->out);
		ptr++;
	}
	system("cls");	
}
void menu()
{
	printf("\n\n________________________________________________________________________________________________________________________");
	printf("\n\nMENU DRIVEN..");
	printf("\n1.Display the Data");
	printf("\n2.Insert new values in Database");
	printf("\n3.Exit");
}
void display(struct cricketer ctr[],int *n)
{
	printf("\n\t\t\t\tDATA OF %d CRICKETERS!!",*n);
	struct cricketer *ptr;
	ptr=ctr;
	int i;
    printf("\n\n|  PLAYER NAME  |  TEAM NAME  | TOTAL RUNS | NO. OF TIMES GOT OUT | BATTING AVAERAGE |");
	printf("\n......................................................................................");
	for(i=0;i<*n;i++)
	{
		ptr->bavg=(float)ptr->runs/(float)ptr->out;
		printf("\n  %s\t    %s\t  %d \t              %d\t               %.2f ",ptr->pname,ptr->tname,ptr->runs,ptr->out,ptr->bavg);
		ptr++;
	}
}
void insert(struct cricketer ctr[],int *n)
{
	int i,j,pos;
	top:
	printf("\n\nHow many values do you want to insert? ");
	scanf("%d",&j);
	if((*n+j)>100)
	{
		if((100-*n)==0)
		{
			printf("\nCan't enter any values! Array is full");
			printf("\nEnter Again");
			goto top;
		}
		else
		{
			printf("\nCan only enter %d values out of %d values! Array is full",(100-*n),j);
			printf("\nEnter Again");
			goto top;
		}
	}
	top1:
	printf("\nAt what position you want to insert all the values? ");
	scanf("%d",&pos);
	if(pos>(*n+j)||pos<0)
	{
		printf("\nYou can only enter between 1 and %d",*n+1);
		printf("\nEnter Again");
		goto top1;
	}
	*n=(*n+j);
    	
    	for(i=*n-1;i>=pos-1;i--)
	   {
		  strcpy(ctr[i+j].pname,ctr[i].pname);
		  strcpy(ctr[i+j].tname,ctr[i].tname);
		  ctr[i+j].runs=ctr[i].runs;
		  ctr[i+j].out=ctr[i].out;
	   }
	printf("\nEnter the new values -->"); 
	for(i=0;i<j;i++)
	{
		printf("\nPlayer %d..\n",i+1);
		printf("Enter Player Name: ");
		fflush(stdin);
		scanf("%[^\n]",&ctr[pos-1+i].pname);
		printf("Enter Team Name: ");
		fflush(stdin);
		scanf("%[^\n]",&ctr[pos-1+i].tname);
		printf("Enter Runs Scored: ");
		scanf("%d",&ctr[pos-1+i].runs);
		printf("Enter No. of times got out: ");
		scanf("%d",&ctr[pos-1+i].out);
	}
}
main()
{
	struct cricketer ctr[100], *ptr;
	ptr=ctr;
	int num,ch;
	start();
	top:
	printf("\n\nHow many Cricketers are there(max 100) ? ");
    scanf("%d",&num);
    if(num>100||num<=0)
    {
    	printf("\nInvalid Input :/ \nEnter Again!!");
		goto top;
	}
	input(ctr,&num);
	do
	{
		menu();
		printf("\nEnter your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					system("cls");
					start();
					display(ctr,&num);
					break;
				}
			case 2:
				{
					system("cls");
					start();
					insert(ctr,&num);
					system("cls");
					printf("\nNew Dataset -->");
					display(ctr,&num);
					break;
				}
			case 3:
				{
					exit(0);
				}
			default:
				{
					printf("\nWrong Choice!!");
				}
	    }
		
	}while(ch!=3);
}
