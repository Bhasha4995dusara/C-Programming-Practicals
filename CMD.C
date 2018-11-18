/*
	AUTHOR : BHASHA DUSHARA M.
	EMAIL:BHASHA_DUSARA@YAHOO.COM
	DATE OF CREATION: 12 JULY 2016
	OBJECTIVE:ODD EVEN AND PRIME USING COMMAND LINE ARGUMENT
*/
#include<stdio.h>
#include<conio.h>

void main(int argc,char *argv[])   //MAIN START
{
    int i,odd=0,j,count=0,even=0,nprime=0,a,b;
    clrscr();
    printf("\n this is the no. of arg",argc);
    printf("\n this is the first arg",argv[0]);

    for(i=1;i<argc;i++)               //LOOP1 START
    {
	b=atoi(argv[i]);
	if(b%2!=0)
	{
	       //	printf("\n The no. is even");
	       odd=odd+b;
	}
     }
     //LOOP1 END
     printf("\n The odd numbers are:%d",odd);
     for(i=1;i<argc;i++)             //LOOP2 START
    {
	b=atoi(argv[i]);
	if(b%2==0)
	{
	       //	printf("\n The no. is even");
	       even=even+b;
	}
     }
     //LOOP2 END
    printf("\n The even numbers are:%d",even);
    printf("\n This is prime number program");
    for(i=1;i<=argc;i++)                  //LOOP3 START
    {

	b=atoi(argv[i]);
	count=0;
	for(j=2;j<b;j++)          //LOOP4 START
	{

		if(b%j==0)
		{
			count=1;
			break;
		}

	    //	count=0;                        //LOOP4 END
	}
		if(count==0 && b>1)
		{
			nprime=nprime+b;

		}
    }
    printf("\n This is prime number:%d",nprime);
    //LOOP3 END

getch();
}
//MAIN END