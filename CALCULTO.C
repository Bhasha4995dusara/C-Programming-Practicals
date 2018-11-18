#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,choice,c;
	clrscr();
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("2.Subtraction\n");
	printf("3.division\n");
	printf("4.square Root\n");
	printf("5.cube Root\n");
	printf("5.Ceil()\n");
	printf("6.Floor()\n");
	printf("7.Obsolute\n");
	switch(choice)
	{
		case 1:
			printf("Enter the value of A and B");
			scanf("%d%d",&a,&b);
			c=a+b;
			printf("your addition=%d",c);
			break;
		case 2:
			printf("Enter the value of A and B");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf("your subtraction=%d",c);
			break;
		case 3:
			printf("Enter the value of A and B");
			scanf("%d%d",&a,&b);
			if(b==0)
			{
				printf("plz.. enter valid number/n");
			}
			c=a/b;
			printf("your division=%d",c);
			break;
		case 4:
			printf("Enter the value of A");
			scanf("%d",&a);
			 c=sqrt(a);
			printf("your square root=%d",c);
			break;
	}
getch();
}