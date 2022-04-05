#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char name[100],f;
	int pn,n,max,tot=0,i,k=1,run[1000],c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
	float avg;
	do
	{
		fflush(stdin);
		printf("Enter Player Name : ");
		gets(name);
		printf("Enter Player Number : ");
		scanf("%d",&pn);
		printf("Enter Number of matches played by the player : ");
		scanf("%d",&n);
		printf("Enter Scores of the Player : \n");
		for(i=0;i<n;i++)
		scanf("%d",&run[i]);
		
		for(i=0;i<n;i++)
		{
			if(run[i]<0 || run[i]>=250)
			{   k=0;
				printf("Invalid Runs are Entered\n");
				break;
			}
		}
		
		if(k==1)
		{
			max=0;
			for(i=0;i<n;i++)
			{
				tot += run[i];
				if(run[i]>max)
				max=run[i];
				if(run[i]==0)
				c1++;
				else if(run[i]>0 && run[i]<50)
				c2++;
				else if(run[i]>49 && run[i]<100)
				c3++;
				else if(run[i]>99 && run[i]<150)
				c4++;
				else if(run[i]>149 && run[i]<200)
				c5++;
				else
				c6++;
			}//for
			avg= tot/(float)n;
			printf("\n\n");
			printf("Player No. : %d\n",pn);
			printf("Player Name : %s\n",name);
			printf("Total Matches Played : %d\n",n);
			printf("Total Score : %d\n",tot);
			printf("Average Score : %.2f\n",avg);
			printf("Maximum Runs : %d\n",max);
			printf("Number of Matches Where score is 0 : %d\n",c1);
			printf("Number of Matches Where score is 1 to 49 : %d\n",c2);
			printf("Number of Matches Where score is 50 to 99 : %d\n",c3);
			printf("Number of Matches Where score is 100 to 149 : %d\n",c4);
			printf("Number of Matches Where score is 150 to 199 : %d\n",c5);
			printf("Number of Matches Where score is >=200: %d\n",c6);
			printf("\n\n");	
		}//else
		printf("Do You want to Try Again ?\nIf Yes press 1 Otherwise press Any key\n");
		printf("Your Choice : ");
		fflush(stdin);
		scanf("%c",&f);
	}while(f=='1');
	printf("CIA TEST2 TASK COMPLETED!!");
	return(0);
}//main
