//LAB--14
//Bitwise Operators
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char c,f;
    unsigned int a, b;
    
    printf("The Following Program Demonstrates the usage of Bitwise Operators\n\n");
    do{
        
        printf("\nEnter First Unsigned Integer: ");
        scanf("%X", &a);
        printf("\nEnter Second Unsigned Integer: ");
        scanf("%X", &b);
           
                
                printf("\nPress 1 for Bitwise AND.");
                printf("\nPress 2 for Bitwise OR.");
                printf("\nPress 3 for Bitwise EXCLUSIVE OR.");
                printf("\nPress 4 for ONE's Compliment.");
                printf("\nPress 5 for Left Shift.");
                printf("\nPress 6 for Right Shift.");
                printf("\nPress 7 for Exit.");
                fflush(stdin);
                printf("\n\nYour choice : ");
                scanf("%c", &c);
                if(isdigit(c))
                
                {
                switch (c) 
				{
                    case '1':
                    {
                        unsigned int ba;
                        ba=a&b;
                        printf("\na=%X", a);
                        printf("\nb=%X", b);
                        printf("\na&b=%X", ba);
                    
                        break;
                    }

                    case '2':
                    {
                        unsigned int bo;
                        bo=a|b;
                        printf("\na=%X", a);
                        printf("\nb=%X", b);
                        printf("\na|b=%X", bo);
                        
                         break;
                    }
                       

                    case '3':
                    {
                        unsigned int eo;
                        eo=a^b;
                        printf("\na=%X", a);
                        printf("\nb=%X", b);
                        printf("\na^b=%X", eo);
                        
                         break;
                    }
                      

                    case '4':
                    {
                        unsigned int oa, ob;
                        oa=~a;
                        ob=~b;
                        printf("\na=%X", a);
                        printf("\nONE's Compliment of a=%X", oa);
                        printf("\nb=%X", b);
                        printf("\nONE's Compliment of b=%X", ob);
                        
                         break;
                    }
                       

                    case '5':
                    {
                        int ta,tb;
                        unsigned int la,lb;
                        printf("\nHow many times do you want shift a: ");
                        scanf("%d", &ta);
                        printf("\nHow many times do you want shift b: ");
                        scanf("%d", &tb);
                        if(ta>0&&tb>0){
                            la=a<<ta;
                            lb=b<<tb;
                            printf("\na=%X", a);
                            printf("\na shifted %d times to the left is: %X",ta, la);
                            printf("\nb=%X", b);
                            printf("\nb shifted %d times to the left is: %X",tb, lb);
                        }
                        else{
                            printf("\nNo. of Times to Shift should be greater than 0.");
                        }
                        
                         break;
                    }
                      

                    case '6':
                    {
                        int ta,tb;
                        unsigned int ra,rb;
                        printf("\nHow many times do you want shift a: ");
                        scanf("%d", &ta);
                        printf("\nHow many times do you want shift b: ");
                        scanf("%d", &tb);
                        if(ta>0&&tb>0){
                            ra=a>>ta;
                            rb=b>>tb;
                            printf("\na=%X", a);
                            printf("\na shifted %d times to the right is: %X",ta, ra);
                            printf("\nb=%X", b);
                            printf("\nb shifted %d times to the right is: %X",tb, rb);
                        }
                        else{
                            printf("\nNo. of Times to Shift should be greater than 0.");
                        }
                        
                        break;
                    }
                        

                    case '7':
                    {
                        printf("\n\nThank You.");
                        break;
                    }
                       

                    default:
                     printf("\nInvalid Choice.\nMake a choice from 1 to 7.");
					 break;
                }//switch
            }//digit if
            else
            printf("Invalid Input.\nEnter a Valid Digit.");
            
                if(c!='7')
				{
fflush(stdin);
printf("\n\nDo you want to do it again?\nThen press 1 \nOtherwise press any key\n");
printf("Your choice ");
scanf("%c",&f);
printf("\n\n");;
                }//choice if
    }while (f=='1');
printf("\n\nLAB 14 Task Completed");  	
}
