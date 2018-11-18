/*                      AUTHOR:BHASHA DUSHARA
			DATE OF CREATION:14 JULY 2016
			EMAIL:BHASHA_DUSARA@YAHOO.COM
			OBJECTIVE:PATTERN TRIANGLE
*/
#include<stdio.h>
#include<conio.h>
void main() 		//MAIN START
{
	int i,j,n=0;
	char s;
	clrscr();

	printf("\n enter your line no.:");
	scanf("%d",&n);
	printf("\n enter the symbol:\n");
	flushall();
	scanf("%c",&s);
	for(i=0;i<=n;i++)           //OUTER LOOP START
	{
		for(j=0;j<=i;j++)                     //INNER LOOP START
		{
			printf("%c",s);
		}                                     //INNER LOOP END
		printf("\n");
	}                           //OUTER LOOP END
getch();
}                        //MAIN END