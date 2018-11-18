/*
	AUTHOR : BHASHA DUSHARA M.
	EMAIL:BHASHA_DUSARA@YAHOO.COM
	DATE OF CREATION: 18 JULY 2016
	OBJECTIVE: bubble sorting
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 8
void main()
{
	int a[SIZE];
	int i,k,j,temp;
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		printf("\nenter the a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n Array before sorting:\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d",a[i]);

	}//end of for loop
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			} //end if
			printf("\n");
			for(k=0;k<SIZE;k++)
			{
				printf("%d\t",a[k]);
			}//end of for
		} //end inner for
		printf("\n");
		getch();
	} //end outer for
	printf("\n Array after sorting:");
	for(i=0;i<SIZE;i++)
	{
		printf("\nenter the a[%d]=%d",i,a[i]);

	}//end of for loop
getch();
}
