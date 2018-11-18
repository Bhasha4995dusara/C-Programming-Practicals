/*                      AUTHOR:BHASHA DUSHARA
			DATE OF CREATION:14 JULY 2016
			EMAIL:BHASHA_DUSARA@YAHOO.COM
			OBJECTIVE:PATTERNs
*/
#include<stdio.h>
#include<conio.h>
void main() 		//MAIN START
{
	int i,j,n,ch,m,coef = 1,k,e=1,space;
	char s;
	clrscr();
	start:
	printf("\n-----------------");
	printf("\n1.pascal triangle");
	printf("\n2.Equilater");
	printf("\n3.Rectangle");
	printf("\n4.Square");
	printf("\n5.Inverse of right angle triangle");
	printf("\n6.Isosceles");
	printf("\n7.Exit");
	printf("\n----------------------");
	printf("\n enter your choice:");
	scanf("%d",&ch);

	switch(ch)                   //OUTER SWITCH START
	{
		case 1:
			printf("Enter number of line: ");
			scanf("%d",&n);

			for(i=0; i<n; i++)               //OUTER FORLOOP START
			{
				for(space=1; space <= n-i; space++)           //INNER LOOP START
				printf("  ");

				for(j=0; j <= i; j++)               //INNER LOOP START
				{
				 if (j==0 || i==0)
					coef = 1;
				 else
					coef = coef*(i-j+1)/j;

				  printf("%4d", coef);
				}                                         //INNER LOOP END
			printf("\n");
			}                                   //OUTER LOOP END
			goto start;

		case 2:
			printf("\n enter your line no.:");
			scanf("%d",&n);
			printf("\n enter the symbol:\n");
			flushall();
			scanf("%c",&s);
			for(i=1;i<=n;i++)                    //OUTER LOOP START
			{
				for(j=1;j<n-i;j++)                             //INNER LOOP START
				{
					printf(" ");
				}                                   //INNER LOOP END
				for(k=1;k<=(2*i)-1;k++)        //INNER LOOP START
				{
					printf("%c",s);
				}                              //INNER LOOP END
				printf("\n");
			}                                       //OUTER LOOP END
			goto start;

		case 3:
			printf("\n enter your line no.:");
			scanf("%d",&n);
			printf("\n enter the symbol:\n");
			flushall();
			scanf("%c",&s);

			for (i = 0; i < n; i++)            //OUTER LOOP START
			{
				printf("\n");
				for (j = 0; j < n; j++)              //INNER LOOP START
				{
					printf("%c",s);
				}                                     //INNER LOOP END
				printf("\n");
			}                                  //OUTER LOOP END
			goto start;

		case 4:
			printf("\n enter your line no.:");
			scanf("%d",&n);
			printf("\n enter the symbol:\n");
			flushall();
			scanf("%c",&s);
			printf("\n enter your column:");
			scanf("%d",&m);
			for(i=1;i<=n;i++)                  //OUTER LOOP START
			{
				printf("%c",s);

				for(j=2;j<=m;j++)          //INNER LOOP START
				{
					printf("%c",s);

				}                          //INNER LOOP END

				printf("\n");

			}                                  //OUTER LOOP END
			printf("\n");
			goto start;

		case 5:
			printf("\n enter your line no.:");
			scanf("%d",&n);
			printf("\n enter the symbol:\n");
			flushall();
			scanf("%c",&s);
			for(i=n;i>=0;i--)                  //OUTER LOOP START
			{
				printf("\n");
				for(j=0;j<i;j++)            //INNER LOOP START
				{
					printf("%c",s);
				}                           //INNER LOOP END
			}                              //OUTER LOOP END
			goto start;

		case 6:
			printf("\n enter your line no.:");
			scanf("%d",&n);
			printf("\n enter the symbol:\n");
			flushall();
			scanf("%c",&s);
			for(i=1;i<=n;i++)               //OUTER LOOP START
			{
				for(j=4;j>=i;j--)       //INNER LOOP START
				{
					printf(" ");
				}                       //INNER LOOP END
				for(k=0;k<e;k++)         //INNER LOOP START
				{
					printf("%c",s);
				}                               //INNER LOOP END
				printf("\n");
				e=e+2;
			}                                  //OUTER LOOP END
			goto start;
		case 7:
			exit(0);

		default:
			printf("\n Invalid choice");

	}//SWITCH CASE END
getch();
}//MAIN END

