/*
	AUTHOR: PRAJAPATI NIKITA
	EMAILID:PRAJAPATINIKITA123@GMAIL.COM
	DOC:19/07/2016
	OBJECTIVE:ADDITION OF 2D ARRAY(MATRIX)
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 100
void main()
{
	int a[SIZE][SIZE];
	int b[SIZE][SIZE];
	int c[SIZE][SIZE];
	int row1,row2,col1,col2;
	int i,j;
	clrscr();
	again:
	printf("Please Enter the number of row and column for matrix one:\n");
	scanf("%d %d",&row1,&col1);
	printf("\nPlease enter the number of row and column for matrix two:\n");
	scanf("%d %d",&row2,&col2);
	if(row1==row2 && col1==col2)
	{
		printf("\n Enter the %d number of elements for matrix one.\n",row1*col1);
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				scanf("%d",&a[i][j]);
			}//end of inner for loop for first matrix
		}//end of outer for loop for first matrix
		printf("\n Enter the %d number of elements for matrix two.\n",row1*col1);
		for(i=0;i<row2;i++)
		{
			for(j=0;j<col2;j++)
			{
				scanf("%d",&b[i][j]);
			}//end of inner for loop for second matrix
		}//end of outer for loop for second matrix

		for(i=0;i<row1;i++) //for addition of matrix
		{
			for(j=0;j<col1;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}//end of inner for loop for first matrix
		}//end of outer for loop for first matrix
		printf("\n----------------------------------------\n");
		printf("The added matrix is:\n");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				printf("%d\t",a[i][j]);

			}//end of inner for loop for first matrix
			printf("\n");
		}//end of outer for loop for first matrix
		printf("+\n");

		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				printf("%d\t",b[i][j]);


			}//end of inner for loop for first matrix
			printf("\n");
		}//end of outer for loop for first matrix
		printf("\n=============================\n");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				printf("%d\t",c[i][j]);
			}//end of inner for loop for first matrix
			printf("\n");
		}//end of outer for loop for first matrix
	}
	else
       {
		printf("The number of rows and columns are not conformable for addition.\n");
		goto again;
       }
getch();
}//end of main