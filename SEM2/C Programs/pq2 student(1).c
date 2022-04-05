//PQ2 question 1
#include <stdio.h>
#include <stdlib.h>
struct student
{
	int roll, cls, marks[3] ;
	char name[];	
};
void student()
{   int n,i,j;
	typedef struct student stu;
	printf("Enter No. of Students In the Class : ");
	scanf("%d",&n);
	stu s[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter Details of Student %d :\n",(i+1));
		printf("Roll no. : ");
		scanf("%d",&s[i].roll);
		printf("Name : ");
		gets(s[i].name);
		printf("Class : ");
		scanf("%d",&s[i].cls);
		for(j=0;j<3;j++)
		{
		printf("Marks of subject %d : ",(j+1));
		scanf("%d",&s[i].marks[j]);
		}
	}
	
}
