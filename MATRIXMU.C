/* 		Author : bhasha dushara
		date of creation:22 july 2016
		email id:bhasha_dusara@yahoo.com
		objective: matrix multiplication
*/




#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,p,q,c,d,k,sum=0;
	int first[10][10],second[10][10],multiply[10][10];
	printf("enter the number of rows and columns of first matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the element of first matrix\n");
	for(c=0;c<m;c++)
	     for(d=0;d<n;d++)
		scanf("%d",&first[c][d]);
		printf("enter the number of rows and columns od=f second matrix\n");
		scanf("%d%d",&p,&q);

		if(n!=p)
			printf("Matrix with entered orders can't be multiple with each order:\n");
		else
		{
		 printf("enter the element of second matrix\n");
		 for(c=0;c<p;c++)
			for(d=0;d<q;d++)
			scanf("%d",&second[c][d]);
			for(c=0;c<m;c++)
			{
			 for(d=0;d<q;d++)
			 {
				for(k=0;k<p;k++)
				{
				  sum=sum+first[c][k]*second[k][d];
				}     //end of loop
				multiply[c][d]=sum;
				sum=0;
			}
		      }                         //end of loop
		 printf("product of entered matrix:\n");

		 for(c=0;c<m;c++)
		 {
		  for(d=0;d<q;d++)
		  printf("%d\t",multiply[c][d]);
		  printf("\n");
		 }                 //end of loop
		}     //end of else
getch();
}        //end of main

