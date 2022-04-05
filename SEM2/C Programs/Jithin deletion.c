/*Program 1
Deletion of element from an Array*/

#include<stdio.h>
#include<stdlib.h>                                                             //for exit function
#include<string.h>															  //for string manipulation

int i , j ;
void menu();
void readarray (int [] , int );
int searcharray (int [] , int );
void deletion ( int [] , int , int );

struct employee
{
	float salary;
	int id;
	char designation[25];
}s[15];

main()
{
	
	int n , a[15] , option , position , m , repeat  ;
	char choice , name[25] , ch ;
	
	do
	{
	system("cls");
	printf("__________DELETION FROM AN ARRAY____________\n");
	printf("\n1-To store the number of employees in 'n' departments\n2-To store a name(array of char) and modify the name\n3-To store the details of 'n' employees\n4-Exit program\n\n");
	printf("Choose an option: ");
	
	scanf("%d", &option);
	 
	 switch(option)
{

	 	
	 	case 1:
		 {
		  
	        printf("Enter the number of departments:");
	        while(1)
	        {
			
			scanf("%d",&n);
				if(n>10 || n<0)
				{
					printf("\nInvalid Number, Please enter a number range between 0-10\n");
					continue;
				}
				else
				break;
			}
			readarray(a,n);
			menu();
			fflush(stdin); 	
			
			scanf("%c",&choice);
			switch(choice)
			{
				case 'a':
				case 'A':
						{
					position = searcharray(a,n);
					if(position!=-1)
					{
					
					printf("Number found in position %d\n",position+1);
					}
					else break;
					deletion(a,n,position);
 				    break;
 				}
 				case 'b':
 				case 'B': 
 				{
				 
				 printf("Enter the position you want to delete the number: ");
				 while(1)
				 {
				 	scanf("%d",&position);
				 	if(position<0 || position>n+1)
				 	{
				 		printf("\nInvalid position, try again\n");
				 		continue;
					 }
					 else break;
				 }
				 
				 deletion(a,n,position-1);
				break; 
				
				}
				
				case 'c':
				case 'C': 
				{
				
				         printf("\nEnter the number of elements you wish to delete: ");
				         while(1)
				         {
				         	scanf("%d",&m);
				         	if(m<=0 || m>10)
				         	{
				         		printf("\nInvalid choice,Please try again\n");
				         		continue;
							 }
							 else
							 break;
						 }
						 printf("\nEnter the position you want to delete the number from: ");
				 while(1)
				 {
				 	scanf("%d",&position);
				 	if(position<0 || position>n+1)
				 	{
				 		printf("\nInvalid position, try again\n");
				 		continue;
					 }
					 else break;
				 }
				 position=position-1;
						 
					/*	 for(i=0;i<m;i++)
						 {	 	
                        j=n;
	                    n=n+1;
	                    while(j>=position)
	                    {
	                    a[j]=a[j+1];
	                    j--;
	                    }
					    }
					}
					   */
					   
					   //HERE ARE THE CHANGES
					   
					   for(i=position;i<n;i++)
					   {
					   	a[i]=a[i+m];
					   }
					   n=n-m+1;
					   
					   
					    printf("\nNew data\n");
	                    for(i=0;i<n-1 ;i++)
                        {
		                printf("%d\t",a[i]);
                        }
	                    printf("\n");
	                    break;
						 
			}
		}
		break;
								 
	 	
	 	break;
	 

	 case 2: printf("Enter the name: ");
        	     fflush(stdin);
	            gets(name);
		
	            n=strlen(name);
				printf("\nEnter the position you wish to delete the character: ");
				while(1)
				{
					scanf("%d",&position);
					if(position<=0 || position>n+1)
					{
						printf("\nInvalid position,try again\n");
						continue;
					}
					else break;
				}
				position=position-1;
				j=n;
	            n=n+1;
	           for(i = position; i < n - 1; i++)
            name[i] = name[i+1];

                
	            printf("New data:");
	            printf("%s\n",name);
	    break;
	    case 3:
				printf("\nEnter number of employee details you want to enter: ");
				while(1)
				{
					scanf("%d",&n);
					if(n<=0 || n>15)
					{
						printf("\nPlease enter a valid number below 15\n");
						continue;
					}
					else
					break;
				}
				for(i=0;i<n;i++)
				{
					printf("\nEmployee %d\n",i+1);
					printf("Enter the employee ID:");
					scanf("%d",&s[i].id);
					printf("\nEnter the Employee salary:");
					scanf("%f",&s[i].salary);
					printf("\nEnter the Designation: ");
					scanf("%s",&s[i].designation);
				}
				printf("\nEnter the position you want to remove the data from: ");
				while(1)
				{
					scanf("%d",&position);
					if(position<=0 || position>n+1)
					{
						printf("\nInvalid position,try again\n");
						continue;
					}
					else break;
				}
				position=position-1;
				j=n;
	            n=n+1;
	             for(i = position; i < n - 1; i++)
	            {
	            s[i].id=s[i+1].id;
	            s[i].salary=s[i+1].salary;
	            strcpy(s[i].designation,s[i+1].designation);
	          
	            }
               
	            printf("New data\n");
	            printf("\tEmployee Number \t Employee ID \t\t Employee Salary \t\t Employee Designation \t\t\n");
	            for(i=0;i<n-2;i++)
	            {
				printf("\n\t%d\t\t\t %d\t\t\t Rs.%.2f\t\t\t %s\t\t",i+1,s[i].id, s[i].salary,s[i].designation );
					
				}
		break;
		
		case 4: printf("\nThank You! Have a nice day :)\n");exit(0);
		break;
		
		default:printf("Invalid choice\n");
		break;		
				
	}
scanf("%d", &repeat);
}
}
	while(repeat == 1);
}

void menu()
{
	printf("\n\nEnter how you would like to manipulate the data\n");
	printf("a: To delete an element before the first occurance of a number\n");
	printf("b: To delete element at a given position\n");
	printf("c: To delete 'n' numbers in a specified position\n");
}
void readarray(int a[], int n)
{
	printf("Enter the number of employees in each Department: \n");
	for(i=0;i<n;i++)
	{
		printf("\nDepartment %d: ",i+1);
		while(1)
		{
		scanf("%d",&a[i]);
		if(a[i]<0)
		{
			printf("\nPlease enter valid data\n");
			continue;
		}
		else
		break;
	}
	}
}
int searcharray(int a[],int n)
{
	int i,x,position;
	printf("Enter the number you want to delete : ");
	scanf("%d",&x);

	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			position=i;
			break;
		}
		else if(i==n-1)
		{
			printf("\nNumber not found\n");
			position=-1;
		}
	}
	 
		return(position);
	
}
void deletion(int a[],int n, int position)
{
	for(i = position; i < n - 1; i++)
            a[i] = a[i+1];

        printf("New Array : ");
        for(i = 0; i < n - 1; i++)
            printf("%d ",a[i]);
	printf("\n");
}
