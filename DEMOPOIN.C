/*                      AUTHOR:BHASHA DUSHARA
			DATE OF CREATION:27 JULY 2016
			EMAIL:BHASHA_DUSARA@YAHOO.COM
			OBJECTIVE:DEMONSTRAT ALL DATATYPE USING POINTER.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*b;
	float c,*d;
	char e,*f;
	double g,*h;
	long int i,*j;
	b=&a;
	d=&c;
	f=&e;
	h=&g;
	j=&i;
	clrscr();
	printf("\n enter the integer value:");
	scanf("%d",&a);
	printf("\n enter the float value:");
	scanf("%f",&c);
	printf("\n enter the char value:");
	flushall();
	scanf("%c",&e);
	printf("\n enter the double value:");
	scanf("%lf",&g);
	printf("\n enter the long int value:");
	scanf("%ld",&i);
	printf("\n=================PRINT ADDRESSES AND VALUES==========================");
	printf("\nfor integer address:%u\t value of B:%d\t value of A:%d",b,*b,a);
	printf("\nfor float address:%u\t value of D:%f\t value of C:%f",d,*d,c);
	printf("\nfor char address:%u\t value of F:%c\t value of E:%c",f,*f,e);
	printf("\nfor double address:%u\t value of H:%lf\t value of G:%lf",h,*h,g);
	printf("\nfor long int address:%u\t value of J:%ld\t value of J:%ld",j,*j,i);
	getch();
}
