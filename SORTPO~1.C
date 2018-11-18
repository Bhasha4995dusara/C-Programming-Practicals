/*
	Author -:bhasha dusara
	Date of creation -: 28/07/2016
	E-mail -: bhasha_dusara@yahoo.com
	Objective -: sorting of array using pointer function
*/
#include <stdio.h>
#include <conio.h>
#define SIZE 5
void asorting(int *x, int y);
void dsorting(int *x, int y);
void main()
{
 int a[SIZE],b,c,choice;
 char ch;
 //clrscr();

 start:
		printf("\nChoice 1.Assending array");
		printf("\nChoice 2.Decending array");
		printf("\nChoice 3.Exit");
		printf("\n\nEnter your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				//assending order
			       s1:
		     printf("Enter the %d elements of array:",SIZE);
		     for(b=0; b<SIZE; b++)
		     {
		      scanf("%d",&a[b]);
		     }                           //loop end
		     asorting(a, SIZE);
		     fflush(stdin);
		     printf("\n\nDo you want to continue ??? (y/n) ");
		     scanf("%c",&ch);
		     if(ch=='y')
		     {
			 goto s1;
		     }
		     else
		     {
			 goto start;
		     }

	    case 2:
			//decending order
		s2:
		    printf("Enter the %d elements of array:",SIZE);
		     for(b=0; b<SIZE; b++)
		     {
		      scanf("%d",&a[b]);
		     }                   //loop end
		     dsorting(a, SIZE);
		     fflush(stdin);
		     printf("\n\nDo you want to continue ??? (y/n) ");
		     scanf("%c",&ch);
		     if(ch=='y')
		     {
			 goto s2;
		     }
		     else
		     {
			 goto start;
		     }
	    case 3:
		    exit(0);
			break;
	    default:
		    printf("Invalid choice...");

		}//switch end
    getch();
}                            //main end

void asorting(int *x, int y)           //assending order
{
    int i,j,temp;
    for(i = 1; i <= y-1; i++)                           //outer loop start
    {
	for(j = 0; j < y-i; j++)
	{                                            //inner loop end
	    if(*(x+j) >*(x+j+1))
	    {
		temp = *(x+j);
		*(x+j) = *(x+j+1);
		*(x+j+1) = temp;
	    }                                           //if end
	}                                                       //inner loop end

    }   //outer loop end
    printf("\n\nSorted array:\t");
    for(i = 0; i < 5; i++)
    {
	printf("%d\t",*(x+i));
    }

}                       // assending fun end

void dsorting(int *x, int y)                //decending start
{
    int i,j,temp;
    for(i = 1; i <= y-1; i++)
    {                                         //outer loop start
	for(j = 0; j < y-i; j++)
	{                                     //inner loop start
	    if(*(x+j) <*(x+j+1))
	    {
		temp = *(x+j);
		*(x+j) = *(x+j+1);
		*(x+j+1) = temp;
	    }                                //if end
	}                                    //inner loop end
    }                                         //outer loop end
    printf("\n\nSorted array:\t");
    for(i = 0; i < 5; i++)
    {
	printf("%d\t",*(x+i));
    }

}                                       // desc fun end



