/* 		AUTHOR:BHASHA DUSHARA M.
		DATE OF CREATION:13 JULY 2016
		EMAIL:BHASHA_DUSARA@YAHOO.COM
		OBJECTIVE:COMMAND LINE ARGU 10 NUMBERS AND DIVISIBLE BY 5
*/
#include<stdio.h>
#include<conio.h>

void main(int argc,char *argv[])                //MAIN START
{
	int a,i,sum=0,c;
	printf("\n the no. of argu:%d",argc);
	printf("\n the first arg:%d",argv[0]);

	for(i=1;i<10;i++)                       //LOOP START
	{
	   a=atoi(argv[i]);
	   if(a>10)
	   {
		printf("\n plz enter the only 10 digits");
	   }
	   else
	   {
		sum=sum+a;

	   }


	}
	c=sum%5;
	printf("\n the sum is:%d and divisible by 5 is:%d",sum,c);
getch();
}