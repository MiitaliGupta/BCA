/* LAB--1
Range and Size of all data types
*/
//#include<stdio.h>
#include<limits.h>
#include<float.h>
void main()
{
	printf("The Range of int data type is from %d to %d\n",INT_MIN,INT_MAX);
	printf("And interger variable requires %d bytes \n \n",sizeof(int));
	
	printf("The Range of unsigned int data type is from 0 to %u\n", UINT_MAX);
	printf("And unsigned interger variable requires %d bytes \n \n",sizeof(unsigned int));
	
	printf("The Range of  short int data type is from %hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("And  short interger variable requires %d bytes \n \n",sizeof(short int));
	
	printf("The Range of unsigned short int data type is from 0 to %u\n",USHRT_MAX);
	printf("And unsigned short interger variable requires %d bytes \n \n",sizeof(unsigned short int));
	
	printf("The Range of  long int data type is from %d to %ld\n",LONG_MIN,LONG_MAX);
	printf("And long interger variable requires %d bytes \n \n",sizeof(long int));
	
	printf("The Range of unsigned long int data type is from 0 to %ul\n",ULONG_MAX);
	printf("And unsigned long interger variable requires %d bytes \n \n",sizeof(unsigned long int));
	
	printf("The Range of float data type is from %G to %G\n",FLT_MIN,FLT_MAX);
	printf("And float variable requires %d bytes \n \n",sizeof(float));
	
	printf("The Range of double data type is from %G to %G\n",DBL_MIN,DBL_MAX);
	printf("And double variable requires %d bytes \n \n",sizeof(double));
	
	printf("The Range of long double data type is from %G to %G\n",DBL_MIN,DBL_MAX);
	printf("And long double variable requires %d bytes \n \n",sizeof(long double));
	
	printf("The Range of exponential float data type is from %E to %E\n",FLT_MIN_EXP,FLT_MAX_EXP);
	printf("And exponential float variable requires %d bytes \n \n",sizeof(float));
	
	printf("The Range of exponential double data type is from %E to %E\n",DBL_MIN_EXP,DBL_MAX_EXP);
	printf("And exponetial double variable requires %d bytes \n \n",sizeof(double));
	
	printf("The Range of exponential long Double data type is from %E to %E\n",DBL_MIN_EXP,DBL_MAX_EXP);
	printf("And exponential long double variable requires %d bytes \n \n",sizeof(long double));
	
	printf("The Range of char data type is from %d to %d\n",CHAR_MIN,CHAR_MAX);
	printf("The Range of char data type(in terms of character) is from %c to %c\n",CHAR_MIN,CHAR_MAX);
	printf("And character variable requires %d bytes \n \n",sizeof(char));
	
	printf("The Range of signed char data type is from %d to %d\n",SCHAR_MIN,SCHAR_MAX);
	printf("The Range of signed char data type(in terms of character) is from %c to %c\n",SCHAR_MIN,SCHAR_MAX);
	printf("And signed character variable requires %d bytes \n \n",sizeof(signed char));
	
	printf("The Range of  unsigned char data type is from %d to %d\n",0,UCHAR_MAX);
	printf("And unsigned character variable requires %d bytes \n \n",sizeof(unsigned char));
	
	printf("Maximum size of Multibyte Character is %d bytes \n \n",MB_LEN_MAX);
		
}

