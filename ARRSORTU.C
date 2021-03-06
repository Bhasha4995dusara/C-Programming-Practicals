/*
	AUTHOR: dushara bhasha
	EMAILID:bhasha_dusara@yahoo.COM
	DOC:21/07/2016
	OBJECTIVE:SORT AN ARRAY USING BUBBLE SORT ALGORITHM WITH THE USE OF FUNCTIONS
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 5
#define CSIZE 10
void ascendingSort(); // function for Ascending order sorting of an array
void descendingSort();//function for Descending order sorting of an array
void charAscenSort();// function for character Ascending order sorting of an array
void charDescenSort(); //function for character Descending order sorting of an array
void main()
{
	int choice;
	clrscr();
	printf("\n------------------------------------\n");
	printf("Enter your choice for order of sorting");
	printf("\n1.ASCENDING ORDER SORTING");
	printf("\n2.DESCENDING ORDER SORTING");
	printf("\n3.CHARACTER ASCENDING ORDER SORTING");
	printf("\n4.CHARACTER DESCENDING ORDER SORTING");
	printf("\n5.EXIT\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1://for ascending order
			ascendingSort();
			break;
		case 2://for descending order
			descendingSort();
			break;
		case 3://for character ascending order
			charAscenSort();
			break;
		case 4://for character descending order
			charDescenSort();
			break;
		case 5:exit(0);
	 }
getch();
}//end of main

void ascendingSort()
{
	int a[SIZE];
	int i,j,k,temp,swap;
	for(i=0;i<SIZE;i++)//for scaning array
	{
		printf(" enter the %d array values: ",SIZE);
		scanf("%d",&a[i]);
	}//end of for
	printf("\n------------------------------------\n");
	printf("array before sorting:\n");
	for(i=0;i<SIZE;i++)//for printing array
	{
		printf("%d\t",a[i]);
	}//end of for
	for(i=0;i<SIZE;i++)//outer for loop
	{
		swap=0;
		printf("\npass %d \n",i);
		for(j=0;j<SIZE-1;j++)//inner for loop
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				swap=1;
			}//end of if
			printf("\n");
			for(k=0;k<SIZE;k++) //loop for sub pass
			{
				printf("%d\t",a[k]);
			}//prints sub pass
			printf("\n");
			getch();
		}//end of inner forloop
		if(swap==1)
		{
			continue;
		}
		else
		{
			break;
		}
	}//end of outer for loop
	printf("\n------------------------------------\n");
	printf("array after sorting:\n");
	for(i=0;i<SIZE;i++)//for printing array
	{
		printf("%d\t",a[i]);
	}//end of for
}// end of ascendintSort function


void descendingSort()
{
	int a[SIZE];
	int i,j,k,temp,swap;
	for(i=0;i<SIZE;i++)//for scaning array
	{
		printf(" enter the %d array values: ",SIZE);
		scanf("%d",&a[i]);
	}//end of for
	printf("\n------------------------------------\n");
	printf("array before sorting:\n");
	for(i=0;i<SIZE;i++)//for printing array
	{
		printf("%d\t",a[i]);
	}//end of for
	for(i=0;i<SIZE;i++)//outer for loop
	{
		swap=0;
		printf("\npass %d \n",i);
		for(j=0;j<SIZE-1;j++)//inner for loop
		{
			if(a[j]<a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				swap=1;
			}//end of if
			printf("\n");
			for(k=0;k<SIZE;k++) //loop for sub pass
			{
				printf("%d\t",a[k]);
			}//prints sub pass
			printf("\n");
			getch();
		}//end of inner forloop
		if(swap==1)
		{
			continue;
		}
		else
		{
			break;
		}
	}//end of outer for loop
	printf("\n------------------------------------\n");
	printf("array after sorting:\n");
	for(i=0;i<SIZE;i++)//for printing array
	{
		printf("%d\t",a[i]);
	}//end of for
}//end of descending Function

void charAscenSort()
{
	char s[CSIZE],ch;
	int length,i,j;
	printf(" enter any string:");
	scanf("%s",&s);
	length = strlen(s);
	printf("\n------------------------------------\n");
	printf(" STRING before sorting:\n");
	printf("%s\t",s);
	for(i=0;i<length;i++)//outer for loop
	{
		for(j=0;j<length-1;j++)//inner for loop
		{
			if(s[j]>s[j+1])
			{
				ch = s[j];
				s[j] = s[j+1];
				s[j+1] = ch;
			}//end of if
		}//end of inner for loop
	 }//end of outer for loop
	 printf("\n------------------------------------\n");
	 printf("STRING after sorting:\n");
	 printf("%s\t",s);
}//end of charAscenSort Function

void charDescenSort()
{
	char s[CSIZE],ch;
	int length,i,j;
	printf(" enter any string:");
	scanf("%s",&s);
	length = strlen(s);
	printf("\n------------------------------------\n");
	printf(" STRING before sorting:\n");
	printf("%s\t",s);
	for(i=0;i<length;i++)//outer for loop
	{
		for(j=0;j<length-1;j++)//inner for loop
		{
			if(s[j]<s[j+1])
			{
				ch = s[j];
				s[j] = s[j+1];
				s[j+1] = ch;
			}//end of if
		}//end of inner for loop
	}//end of outer for loop
	printf("\n------------------------------------\n");
	printf("STRING after sorting:\n");
	printf("%s\t",s);
}//end of charDescenSort function