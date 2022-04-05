// IF practice questions 
#include<stdio.h>
#include<stdlib.h>
void ques9();
void ques10();
void ques11();
int main(void)
{ printf("Press ques no. to check\nYour options are 9,10,11.\nYour Choice : ");
int c;
scanf("%d",&c);
if(c==9)
ques9();
if(c==10)
ques10();
if(c==11)
ques11();
return(0);
}
void ques9()
{
int cn,d,base = 0,i=0;
float amt = 0.0;
printf("\n\nEnter Customer No. : ")	;
scanf("%d", &cn);
printf("Enter No. of Units Counsumed : ")	;
scanf("%d", &d);
printf("\n\nCustomer No. : %d ",cn)	;
printf("\nUnits Consumed : %d ",d);


if(d > 600)
base = 390 ;
else if(d>400 && d<601)
base = 230;
else if(d>200 && d<401)
base = 100;

if(d>600)
{i=(d-600);
amt = 1.0*i;
d = d - i;
}
if(d>400 && d<601)
{ i= d - 400;
amt = amt+ (0.80 * i);
d = d - i;
}
if(d>200 && d<401)
{ i= d -200;
amt = amt+ (0.65 * i);
d = d - i;
}
if(d<201)
amt = amt + (0.5*d);

amt = amt+base;

printf("\nAmount to be paid : %.2f ",amt);
	
}
void ques10()
{
int cn,d,i=0;
float amt = 0.0,lmr,cmr;
char type;
printf("\n\nEnter Customer No. : ")	;
scanf("%d", &cn);
fflush(stdin);
printf("Enter Customer Type\nI for Industry\nD for Domestic\nType : ")	;
scanf("%c", &type);
printf("Enter Last Month's Reading of Electricity Meter : ")	;
scanf("%f", &lmr);
printf("Enter Current Month's Reading of Electricity Meter : ")	;
scanf("%f", &cmr);
d=cmr-lmr;
int y =d;

printf("\n\nCustomer No. : %d",cn)	;
switch(type)
{
 case 'd':
 case 'D':
    { printf("\nCustomer Type : Domestic")	; 
	 if(d>250)
         {i=(d-250);
          amt = 1.5*i;
          d = d - i;
         }
         if(d>150 && d<251)
         { i= d - 100;
         amt = amt+ (1.2 * i);
         d = d - i;
         }
         if(d>50 && d<151)
         { i= d -100;
         amt = amt+ (0.75 * i);
         d = d - i;
         }
         if(d<51)
         amt = amt + (0.5*d);
      if(amt>1500)
      amt = amt +(0.20*amt);
      break;
    }
	
 case 'i':
 case 'I':
    { printf("\nCustomer Type : Industrial")	;
	  if(d>250)
         {i=(d-250);
          amt = 3.5*i;
          d = d - i;
         }
         if(d>150 && d<251)
         { i= d - 100;
         amt = amt+ (2.00 * i);
         d = d - i;
         }
         if(d>50 && d<151)
         { i= d -100;
         amt = amt+ (1.25* i);
         d = d - i;
         }
         if(d<51)
         amt = amt + (1.0*d);
    
      amt = amt +(0.25*amt);
      break;
    }
	default:
    	printf("Invalid Input");
    	break;		
}

printf("\nLast Month's Reading of Electricity Meter : %.2f ",lmr)	;
printf("\nCurrent Month's Reading of Electricity Meter : %.2f ",cmr)	;
printf("\nUnits Consumed : %d ",y)	;       
printf("\nAmount to be paid : %.2f ",amt)	; 

}
void ques11()
{
long cn;
char type;
int d,d1,z,i;
float amt;
	
printf("\n\nEnter Customer No. : ")	;
scanf("%l", &cn);
fflush(stdin);
printf("Enter Customer Type\nS for Student\nF for Faculty\nType : ")	;
scanf("%c", &type);	
printf("Enter No. of Late after due date : ")	;
scanf("%d", &d);
d1=d;
printf("If Book is Damaged Press 1 Otherwise press 0\nDamage : ")	;
scanf("%d", &z);	

printf("\n\nCustomer No. : %ld",cn)	;
switch(type)
{
 case 's':
 case 'S':
    { printf("\nCustomer Type : Student")	; 
    
         if(d>10)
         { i= d - 10;
         amt = amt+ (3.25 * i);
         d = d - i;
         }
         if(d>5 && d<11)
         { i= d-5;
         amt = amt+ (0.75 * i);
         d = d - i;
         }
         if(d<6)
         amt = amt + (0.5*d);
         
      if(z==1)
      amt = amt +1000;
      break;
    }
case 'f':
 case 'F':
    { printf("\nCustomer Type : Faculty"); 
    
         if(d>10)
         { i= d - 10;
         amt = amt+ (10.5 * i);
         d = d - i;
         }
         if(d>5 && d<11)
         { i= d-5;
         amt = amt+ (2.5 * i);
         d = d - i;
         }
         if(d<6)
         amt = amt + (2.0*d);
         
      if(z==1)
      amt = amt +2000;
      break;
    }
    default:
    	printf("Invalid Input");
    	break;
}
printf("\nNo. of Late after due date : %d ",d1)	;
printf("\nAmount to be paid : %.2f",amt)	;
}
