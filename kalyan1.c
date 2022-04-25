#include<stdio.h>
int main()
{
	int no,cem,che,mat,pps,french,tot;
	float avg;
	printf("enter student no and 5 subject marks\n");
	scanf("%d %d %d %d %d %d",&no,&cem,&che,&mat,&pps,&french);
	if(cem<=100&&che<100&&mat<100&&pps<=100&&french<=100)
	{
	tot=cem+che+mat+pps+french,tot;
	avg=tot/5.0;
	printf("Total marks=%d\n",tot);
	printf("Average marks=%f\n",avg);
	if(cem>=50&&che>=50&&mat>=50&&pps>=50&&french>=50)
	{
		printf("Result=pass\n");
		if(avg>=75)
			printf("Grade A\n");
		else if(avg>=60)
			printf("Grade B\n");
		else if(avg>=50)
			printf("Grade c\n");
		else
			printf("Grade d\n");
	}
	else
		printf("Result=Fail\n");
	}
	else
		printf("WRONG MARK ENTERED");
}
