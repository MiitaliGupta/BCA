//Search 

int search(	cl* root, int x)
{
   cl *current = root;
   if(current == NULL)
   {
   printf("\nTREE IS EMPTY\n");
   return 0;
   }
   {	
   while(current->r != x)
   {
	
      if(current != NULL) 
	  {
      	
         //go to left tree
         if(current->r > x)
		 {
            current = current->lc;
         }  //else go to right tree
         else {                
            current = current->rc;
         }
			
         //not found
         if(current == NULL)
		 {
            printf("\nRANK NOT FOUND\n");
            return 0;
         }
      }	//if		
   }//while
   
    printf("\nRANK FOUND\n");
    printf("\nSTUDENT NAME : %s ",current->n);
    printf("\nRANK         : %d \n",current->r);
}
}

//deletion

cl* minValueNode(cl* node)
{
    cl* current = node;
 
    // loop down to find the leftmost leaf 
    while (current && current->lc != NULL)
        current = current->lc;
 
    return current;
}

 
cl* deleteNode(cl* root,int key) 
{

    if (root == NULL)
       {
       	printf("\nRANK NOT FOUND\n");
       	return root;
		} 
 
    //key smaller than root ie left child
    if (key < root->r)
        root->lc = deleteNode(root->lc, key);
 
        //key greater than root ie right child
    else if (key > root->r)
        root->rc = deleteNode(root->rc, key);
 
    //key is equal to root
    else 
	{
        // node with only one child or no child
        if (root->lc == NULL) 
		{
            cl* temp = root->rc;
            free(root);
            return temp;
        }
        else if (root->rc == NULL)
		 {
            cl* temp = root->lc;
            free(root);
            return temp;
        }
 
        // node with two children
        cl* temp = minValueNode(root->rc);
        root->r = temp->r;
        root->rc = deleteNode(root->rc, temp->r);
    }
    return root;
     
}


