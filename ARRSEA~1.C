/*
	AUTHOR:bhasha dusara
	EMAIL:bhasha_dusara@yahoo.com
	DOC:01/08/2016
	OBJECTIVE:ADD ARRAY AND SEARCH VALUE FROM ARRAY USING POINTER
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 5
void addarray(int *a);
void searcharr(int *a,int c);
void main()
{
	int choice,a[SIZE],n,i;
	int *b=a;
	clrscr();
again:
	printf("\nEnter your choice for array operation:");
	printf("\n1.......Sum the array elements");
	printf("\n2.......search an element from the array");
	printf("\n3.......exit");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1://for sum array elements
			printf("\nenter the %d array elements\n:",SIZE);
			for(i=0;i<SIZE;i++,b++)
			{
				scanf("%d",&a[i]);

			}//end of scanning array
			addarray(a);
			printf("\n");
			goto again;
		case 2://for searching an element from the array
			printf("\nenter the %d array elements:\n",SIZE);
			for(i=0;i<SIZE;i++,b++)
			{
				scanf("%d",&a[i]);

			}//end of scanning array
			printf("\nEnter the elemment that you want to search..!");
			scanf("%d",&n);
			searcharr(a,n);
			printf("\n");
			goto again;
		case 3:exit(0);



	}//end of switch
getch();
}//end of main

void addarray(int *a)
{
	int i,sum=0;
	for(i=0;i<SIZE;i++)
	{
		sum = sum +a[i];
	}//end of for loop
	printf("\n----------------------------------\n");
	printf("\nthe sum is%d",sum);
	printf("\n----------------------------------\n");
}//end of function

void searcharr(int *a, int c)
{
	int i,flag=0;
	for(i=0;i<SIZE;i++,a++)
	{
		printf("\n the address of %d atindex %d is\t%u ",*a,i,a);
		if(c==*a)
		{       printf("\nthe value is found%d",c);
			printf("\nat index %d",i);
			printf("\nat address %u",a);
		}//end of if

	}//end of for

 /*	for(i=0;i<SIZE;i++)
	{
		if(c==*a)
		{

			break;
		}//end of if
		else
		{
			continue;
		}

	}//end of for*/
// print:
  //	printf("\nSorry..! The element you want to search was not Found..!");
}//end of the function