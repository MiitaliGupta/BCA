#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
//#include "DS Lab 9 in_out.h"
const char* ch_rev(char a[]){
	char *b[1000];
	int i=0,x;
	
	x=len(a)-1;
	
	while(i<x){
		*b[i]=a[x];
		
		i++;
		x--;
	}
	*b[i]='\0';
	
	printf("\n\nThe Original String: %s", a);
	printf("\nThe Reversed String: %s", b);
	
	return *b;
}

void rev(struct str all[], int n){
	int x,i;
	char c,choice,temp[1000], z[1000];
	
	do{
		printf("\n\nReverse Menu");
		printf("\n1. Reverse a new String.");
		printf("\n2. Reverse a String within the STRUCT.");
		printf("\n3. Exit.");
	
		printf("\n\nEnter your choice: ");
		fflush(stdin);
		scanf("%c", &choice);
	
		if(!isdigit(choice)){
	        printf("\nEnter a Digit.");
		}
		
		else{
			switch(choice){
				case '1':
					printf("\nEnter the new String: ");
					fflush(stdin);
					gets(temp);
				
					z=ch_rev(temp);
					break;
					
				case '2':
					display(all,n);
					printf("\nEnter the index no. you want to reverse: ");
					scanf("%d", &x);
					
					z=ch_rev(all[x].s);
					break;
					
				case '3':
					printf("\n\n Returning to main menu.");
					break;
					
				default:
					printf("\n\nInvalid Choice.");
					printf("\nEnter a number between 1-3");
					break;
			}
		}
		
		if(choice!='3'){
			printf("\n\nDo you want to redo the menu. (Y/N): ");
        	fflush(stdin);
        	scanf("%c", &c);
		}
        
	}while(choice!='3' && (c=='y' || c=='Y'));
}
