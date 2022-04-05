// Binary search tree

#include"bst_var.h"
#include"bst_traverse.h"
#include"bst_insert.h"
#include"bst_ser_del.h"




int main()
{ char c,ch;
system("color 3");
start();
int x;

//cl *root = (cl*) malloc(sizeof(cl));

   do
   {
  
	printf("\n\nMENU");
	printf("\n1.To Insert Data in the Tree");
	printf("\n2.To Perform Traversal");
	printf("\n3.To Search Data");
	printf("\n4.To Delete Node");
	printf("\n5. Clear the Tree.");
	printf("\n6.To Exit");
	printf("\nYour Choice : ");
	fflush(stdin);
	c = getchar();
	
		switch(c)
		{
			case '1' :
			//	system("cls");
				system("color 3");
				start();
					do
					{
						insert(root) ;
						
						printf("\nPress 1 to Enter more Data\nPress any key to Exit\nYour Choice : ");
						fflush(stdin);
						ch = getchar();
						
						system("cls");
						system("color 3");
						start();
					}while(ch == '1');
				break;
			case '2' :
				traverse(root) ;
				break;
			case '3' :
				system("color a");
			//	system("cls");
			    start();
				printf("\n\nEnter Rank to be Searched : ");
				scanf("%d",&x);
				search(root,x);
				break;
			case '4' :
				system("color a");
			//	system("cls");
			    start();
				printf("\n\nEnter Rank to be Deleted : ");
				scanf("%d",&x);
				root=deleteNode(root,x);
				f=0;
				in(root) ;
				break;
			case '5' :
			//	system("cls");
				system("color 3");
				start();
				
				printf("Tree Cleared.");
	            root = NULL;
				break;
			case '6' :
				system("color 3");
				break;
			default : 
		//	system("cls");
			start();
			system("color 4");
			printf("\nChoose Among 1,2,3,4.\n");
		}//switch

  		 }while(c!='6');
   
printf("\nLAB 15 TASK COMPLETED!!");
return 0;
}


