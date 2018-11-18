/*
	AUTHOR : BHASHA DUSHARA M.
	EMAIL:BHASHA_DUSARA@YAHOO.COM
	DATE OF CREATION: 18 JULY 2016
	OBJECTIVE: bubble sorting with numeric,character
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 5
#define CHAR1 10
void main()
{
	int a[SIZE];
	char s[CHAR1],ch;
	int i,j,k,temp,choice,swap,length;
	clrscr();
	printf("\n1.Assecnding with numeric");
	printf("\n2.Descending with numeric");
	printf("\n3.Assecending with character");
	printf("\n4.Descending with character");
	printf("\n5.exit");

	printf("\n enter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		     //Assecnding order
			for(i=0;i<SIZE;i++)//scanning
			{
				printf(" enter the %d array values: ",SIZE);
				scanf("%d",&a[i]);
			}//end of for
			printf("\n------------------------------------\n");
			printf("array before sorting:\n");
			for(i=0;i<SIZE;i++)//print array
			{
				printf("%d\t",a[i]);
			}//end of for
			for(i=0;i<SIZE;i++)//outer  loop
			{
				swap=0;
				printf("\n------------------pass %d------------------ \n",i);
				for(j=0;j<SIZE-1;j++)//inner  loop
				{
					if(a[j]>a[j+1])
					{
						temp = a[j];
						a[j] = a[j+1];
						a[j+1] = temp;
						swap=1;
					}//end of if


					printf("\n");
					for(k=0;k<SIZE;k++) //loop  sub pass
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
			for(i=0;i<SIZE;i++)//sorted array
			{
				printf("%d\t",a[i]);
			}//end of for
			break;

	case 2:
			//for descending order
			for(i=0;i<SIZE;i++)// scan
			{
				printf(" enter the %d array values: ",SIZE);
				scanf("%d",&a[i]);
			}//end of for
			printf("\n------------------------------------\n");
			printf("array before sorting:\n");
			for(i=0;i<SIZE;i++)//print
			{
				printf("%d\t",a[i]);
			}//end of for
			for(i=0;i<SIZE;i++)//outer  loop
			{
				swap=0;
				printf("\n--------------------pass %d-------------------- \n",i);
				for(j=0;j<SIZE-1;j++)//inner loop
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
			break;
	case 3:
			// character ascending order
			printf(" enter any string:");
			scanf("%s",s);
			length = strlen(s);
			printf("\n------------------------------------\n");
			printf(" String before sorting:\n");
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
				}//end  inner  loop
			}//end outer  loop
			printf("\n------------------------------------\n");
			printf("STRING after sorting:\n");
			printf("%s\t",s);
			break;

		case 4:
			// character descending order
			printf(" enter any string:");
			scanf("%s",s);
			length = strlen(s);
			printf("\n------------------------------------\n");
			printf(" STRING before sorting:\n");
			printf("%s\t",s);
			for(i=0;i<length;i++)//outer loop
			{

				for(j=0;j<length-1;j++)//inner loop
				{
					if(s[j]<s[j+1])
					{
						ch = s[j];
						s[j] = s[j+1];
						s[j+1] = ch;

					}//end of if
				}//end inner loop
			}//end outer loop
			printf("\n------------------------------------\n");
			printf("STRING after sorting:\n");
			printf("%s\t",s);
			break;
	case 5:
		exit(0);
	default:
		printf("\nInvalid choice");
}


getch();
}
