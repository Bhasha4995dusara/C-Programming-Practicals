/*
	Author-:bhasha dushara
	EmailId-:bhasha_dusara@yahoo.com
	Date of creation-:21/07/2016
	objective-: take choice from user for various operations over array using function.
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 5
void addEvenPos();//for addition of values of array at evenpos
void addOddPos();//for addition ofvalues of array at odd pos
int maxNum(); //for finding max value from array
int minNum(); //for finding min value from array
float AvgVal();//for finding an average of array
void main()
{
	int choice,max,min;
	float avg;
	clrscr();
again:
	printf("\n1.ADD EVEN POSITION");
	printf("\n2.ADD ODD POSITION");

	printf("\n3.FIND MAX VALUE");
	printf("\n4.FIND MIN VALUE");
	printf("\n5.FIND AVERAGE");
	printf("\n6.EXIT");
	printf("\n Please enter choice for array operation:");
	scanf("%d",&choice);
	switch(choice) //switch starts
	{
		case 1: //prints sum of array values at even  position
			clrscr();
			addEvenPos();
			goto again;
		case 2://prints sum of array values at odd posion
			clrscr();
			addOddPos();
			goto again;

		case 3://find maximum value from array
			clrscr();
			max = maxNum();
			printf("max is:%d:\n",max);
			goto again;
		case 4: //find minimum value from array
			clrscr();
			min = minNum();
			printf("\nMIN is:%d:\n",min);
			goto again;
		case 5: //find average from array
			clrscr();
			avg = AvgVal();
			printf("\nAVERAGE of array is%f/n:",avg);
			goto again;
		case 6:exit(0);
		default:printf("Invalid choice");
	}//switch end
getch();
}//end of main


void addEvenPos()
{
	int a[SIZE],b[SIZE],c[SIZE];
	int i;
	printf("Enter the value for array a:\n");
	for(i=0;i<SIZE;i++)  //take value of a
	{
		printf("Enter the %d values of array a:",SIZE);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the value for array b:\n");
	printf("\n");
	for(i=0;i<SIZE;i++)   //take value of b
	{
		printf("Enter the %d values of array b:",SIZE);
		scanf("%d",&b[i]);
	}
	for(i=0;i<SIZE;i=i+2)  //addition of array
	{
		c[i]=a[i]+b[i];

	}
	clrscr();
	printf("\n");
	printf("---------------Even Sum---------------");
	printf("\n");
	for(i=0;i<SIZE;i=i+2) //print the sum
	{
		printf("The Addition of a[%d]+b[%d]=c[%d]\n",a[i],b[i],c[i]);
	}
}//end of addEvenPos function

void addOddPos()
{
	int a[SIZE],b[SIZE],c[SIZE];
	int i;
	printf("Enter the value for array a:\n");
	for(i=0;i<SIZE;i++)  //take value of a
	{
		printf("Enter the %d values of array a:",SIZE);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the value for array b:\n");
	printf("\n");
	for(i=0;i<SIZE;i++)   //take value of b
	{
		printf("Enter the %d values of array b:",SIZE);
		scanf("%d",&b[i]);
	}
	for(i=1;i<SIZE;i=i+2)  //addition of array
	{
		c[i]=a[i]+b[i];
	}
	clrscr();
	printf("\n");
	printf("---------------ODD Sum---------------");
	printf("\n");
	for(i=1;i<SIZE;i=i+2) //print the sum
	{
		printf("The Addition of a[%d]+b[%d]=c[%d]\n",a[i],b[i],c[i]);
	}
}//end of addOddPos function

int maxNum()
{
	int a[SIZE],b[SIZE],c[SIZE];
	int i,max;
	printf("Enter the value for array a:\n");
	for(i=0;i<SIZE;i++)  //take value of a
	{
		printf("Enter the %d values of array a:",SIZE);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the value for array b:\n");
	printf("\n");
	for(i=0;i<SIZE;i++)   //take value of b
	{
		printf("Enter the %d values of array b:",SIZE);
		scanf("%d",&b[i]);
	}
	for(i=0;i<SIZE;i++)  //addition of array
	{
		c[i]=a[i]+b[i];
	}
	clrscr();
	printf("\n");
	printf("---------------Sum of array---------------");
	printf("\n");
	for(i=0;i<SIZE;i++) //print the sum
	{
		printf("The Addition of a[%d]+b[%d]=c[%d]\n",a[i],b[i],c[i]);
	}
	max=c[0];
	for(i=0;i<SIZE;i++) //for finding maximum from array
	{
		if(c[i]>max)
		{
			max=c[i];
		}//end of if

	}
	printf("\n");
	printf("---------------MAXIMUM VALUE---------------");
	printf("\n");
return max;
}//end of maxNum function

int minNum()
{       int a[SIZE],b[SIZE],c[SIZE];
	int i,min;
	printf("Enter the value for array a:\n");
	for(i=0;i<SIZE;i++)  //take value of a
	{
		printf("Enter the %d values of array a:",SIZE);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the value for array b:\n");
	printf("\n");
	for(i=0;i<SIZE;i++)   //take value of b
	{
		printf("Enter the %d values of array b:",SIZE);
		scanf("%d",&b[i]);
	}
	for(i=0;i<SIZE;i++)  //addition of array
	{
		c[i]=a[i]+b[i];
	}
	clrscr();
	printf("\n");
	printf("---------------Sum of array---------------");
	printf("\n");
	for(i=0;i<SIZE;i++) //print the sum
	{
		printf("The Addition of a[%d]+b[%d]=c[%d]\n",a[i],b[i],c[i]);
	}
	min=c[0];
	for(i=0;i<SIZE;i++)  //for finding minimum from array
	{
		if(c[i]<min)
		{
			min=c[i];
		}//end of if
	}
	printf("\n");
	printf("---------------MINIMUM VALUE---------------");
	printf("\n");
return min;
}//end of minNum function

float AvgVal()
{
	int a[SIZE],b[SIZE],c[SIZE];
	int i,sum=0;
	float avg;
	printf("Enter the value for array a:");
	for(i=0;i<SIZE;i++)  //take value of a
	{
		printf("Enter the %d values of array a:",SIZE);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the value for array b:");
	printf("\n");
	for(i=0;i<SIZE;i++)   //take value of b
	{
		printf("Enter the %d values of array b:",SIZE);
		scanf("%d",&b[i]);
	}
	for(i=0;i<SIZE;i++)  //addition of array
	{
		c[i]=a[i]+b[i];
	}
	clrscr();
	printf("\n");
	printf("---------------Sum of values---------------");
	printf("\n");
	for(i=0;i<SIZE;i++) //print the sum
	{
		printf("The Addition of a[%d]+b[%d]=c[%d]\n",a[i],b[i],c[i]);
	}
	for(i=0;i<SIZE;i++)// sum of array
	{
		sum = sum+c[i];
	}
	avg =(float)sum/SIZE;  // Average of the array
	printf("\n");
	printf("---------------AVERAGE OF ARRAY VALUES---------------");
	printf("\n");
return avg;
}//end of AvgVal function