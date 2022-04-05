void insert(cl *root) 
{
   cl *temp = (cl*) malloc(sizeof(cl));
   cl *current;
   cl *parent;

   tempNode->data = data;
   tempNode->leftChild = NULL;
   tempNode->rightChild = NULL;

   //if tree is empty
   if(root == NULL) {
      root = tempNode;
   } else {
      current = root;
      parent = NULL;

      while(1) 
	  { 
         parent = current;
         
         //go to left of the tree
         if(data < parent->data) {
            current = current->leftChild;                
            
            //insert to the left
            if(current == NULL) {
               parent->leftChild = tempNode;
               return;
            }
         }  //go to right of the tree
         else {
            current = current->rightChild;

            //insert to the right
            if(current == NULL) {
               parent->rightChild = tempNode;
               return;
            }
         }
      }            
   }
}

cl* createnode()
{
	int x;
	cl *t = (cl*) malloc(sizeof(cl));
	fflush(stdin);
		  printf("\nEnter Student Name : ");
		  gets(t->n); 
		  
		  printf("Do you want to add the rank Manually or Randomly\nPress 1 for Mannual Input\nPress 2 for Random Input");
		  printf("Your Choice : ");
		  scanf("%d",&x);
		  if(x==1)
		  {
		  	printf("\nEnter Student Rank : ");
		  	scanf("%d",&t->r);
		  }
		  else if(x==2)
		  {
			  do
			  {
			  t->r = rand() % 100;
			  }while((t->r)<=0);
		  }
		  else
		  {
		  printf("\nINVALID INPUT\nRANDOM INPUT HAS BEEN DONE");
		   do
			  {
			  t->r = rand() % 100;
			  }while((t->r)<=0);
		  }
		  
	t->lc = NULL;
   t->rc = NULL;

	
	return t;
}//node creation
