/*
	AUTHOR : BHASHA DUSHARA M.
	EMAIL:BHASHA_DUSARA@YAHOO.COM
	DATE OF CREATION: 22 JULY 2016
	OBJECTIVE:ARRAY PASS USING FUNCTION ARGU....
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 6
void asort(int a[],int b); //declaration asort
void dsort(int a[],int b);
 //declaration dsort
void main()                      //Main start
{
	int arr[SIZE];
	int choice,i;
	clrscr();
	start:
	printf("\n 1.Sorting in Ascending Order");
	printf("\n 2.Sorting in descending order");
	printf("\n 3.exit");
	printf("\n Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		clrscr();
		for(i=0;i<SIZE;i++)
		{
			printf("\n Enter the number:");
			scanf("%d",&arr[i]);
		}                   //loop end
		asort(arr,SIZE);
		break;
	case 2:
		clrscr();
		for(i=0;i<SIZE;i++)
		{
			printf("\n Enter the number:");
			scanf("%d",&arr[i]);
		}                       //loop end
		dsort(arr,SIZE);
		break;
	case 3:
		exit(0);
	default:
		printf("\n Invalid choice");
	}   //switch end
	goto start;
	getch();
}                                            //MAin end
void asort(int arr[],int b)              //Definitaion asort
{
			int i,j,k,temp,swap=0;

			printf("\n------------------------------------\n");
			printf("array before sorting:\n");
			for(i=0;i<SIZE;i++)//print array
			{
				printf("%d\t",arr[i]);
			}//end of for
			for(i=0;i<SIZE;i++)//outer  loop
			{
				swap=0;
				printf("\n------------------pass %d------------------ \n",i);
				for(j=0;j<SIZE-1;j++)//inner  loop
				{
					if(arr[j]>arr[j+1])
					{
						temp = arr[j];
						arr[j] = arr[j+1];
						arr[j+1] = temp;
						swap=1;
					}//end of if


					printf("\n");
					for(k=0;k<SIZE;k++) //loop  sub pass
					{
						printf("%d\t",arr[k]);
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
			for(i=0;i<SIZE;i++)//sorted array
			{
				printf("%d\t",arr[i]);
			}//end of for

}
void dsort(int arr[],int b)
{
	int temp,i,j,swap=0,k;
			printf("\n------------------------------------\n");
			printf("array before sorting:\n");
			for(i=0;i<SIZE;i++)//print
			{
				printf("%d\t",arr[i]);
			}//end of for
			for(i=0;i<SIZE;i++)//outer  loop
			{
				swap=0;
				printf("\n--------------------pass %d-------------------- \n",i);
				for(j=0;j<SIZE-1;j++)//inner loop
				{
					if(arr[j]<arr[j+1])
					{
						temp = arr[j];
						arr[j] = arr[j+1];
						arr[j+1] = temp;
						swap=1;
					}//end of if

					printf("\n");
					for(k=0;k<SIZE;k++) //loop for sub pass
					{
						printf("%d\t",arr[k]);

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
				printf("%d\t",arr[i]);
			}//end of for
}