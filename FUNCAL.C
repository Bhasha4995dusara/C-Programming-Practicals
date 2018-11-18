/*              AUTHOR:BHASHA DUSARA
		DATE OF CREATION:21 JULY 2016
		EMAIL_ID:BHASHA.DUSARA@YAHOO.COM
		OBJECTIVE:USING FUNCTION CREATE CAL....
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<funcal.h>

/*void add();
int sub();
int mul(int,int);
void divide(int,int);
void ascii();
void prime();
float ceilfun(float);
void absolute();
void floorval();
void dtoh();
void dtoo();
void minimumfun(int,int);
int squareroot();
void atoifun();

void modefun(int);
void dtobfun();
void medianfun(int);
void sinfun();
void  cosfun();
void tanfun();
void atoffun();
  */
void main()
{
	int z,x,y,choice,a,b,d;

	float c;
	clrscr();
	start:
	printf("\n1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.ASCII value\n");
	printf("6.Prime or Not\n");
	printf("7.Ceil()\n");
	printf("8.Cube Root\n");
	printf("9.Absolute\n");
	printf("10.Floor()\n");
	printf("11.Decimal to Hexadecimal\n");
	printf("12.Decimal to Octal\n");
	printf("13.Minimum value\n");
	printf("14.Square Root\n");
	printf("15.Alphabet to Integer\n");
	printf("16.Mode\n");
	printf("17.Decimal to Binary\n");
	printf("18.median\n");
	printf("19.Sin()\n");
	printf("20.cos()\n");
	printf("21.tan()\n");
	printf("22.Alphabet to Float\n");
	printf("23.exit\n");

	printf("enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			//ADDITION
			clrscr();
			add();
			break;
		case 2:
			//SUBTRACTION
			clrscr();
			z=sub();
			printf("\n subtraction will be:%d",z);
			break;
		case 3:
			//MULTIPLICATION
			clrscr();
			printf("\n enter the value:");
			scanf("%d%d",&x,&y);
			z=mul(x,y);
			printf("\n multiplication:%d",z);
			break;
		case 4:
			//DIVISION
			clrscr();
			printf("\n enter the value:");
			scanf("%d%d",&x,&y);
			divide(x,y);
			break;
		case 5:
			//ASCII
			clrscr();
			ascii();
			break;
		case 6:
			//PRIME OR NOT
			clrscr();
			prime();
			break;
		case 7:
			//CEIL()
			clrscr();
			printf("\n enter the value:");
			scanf("%f",&c);
			z=ceilfun(c);
			printf("\n answer will be:%f",c);
			break;
		case 8:
			//CUBE ROOT
			clrscr();
			printf("enter the value\n");
			scanf("%d",&x);
			z=cuberoot(x);
			printf("\n cube root will be:%d",z);
			break;
		case 9:
			//ABSOLUTE
			clrscr();
			absolute();
			break;
		case 10:
			//FLOOR()
			clrscr();
			floorval();
			break;
		case 11:
			//D TO H
			clrscr();
			dtoh();
			break;
		case 12:
			// D TO O
			clrscr();
			dtoo();
			break;
		case 13:
			//MINIMUM FUNCTION
			 clrscr();
			 printf("\n enter the values of A and B:");
			 scanf("%d%d",&x,&y);
			 minimumfun(x,y);
			 break;
		case 14:
			//SQUARE ROOT
			clrscr();
			z=squareroot();
			printf("\n Square root will be:%d",z);
			break;
		case 15:
			//A TO I
			clrscr();
			atoifun();
			break;
		case 16:
			//MODE
			clrscr();
			printf("\n enter the limit:");
			scanf("%d",&x);
			modefun(x);
			break;
		case 17:
			//D TO B
			clrscr();
			dtobfun();
			break;
		case 18:
			//MEDIAN
			clrscr();
			printf("\n enter the value:");
			scanf("%d",&x);
			medianfun(x);
			break;
		case 19:
			//SIN()
			clrscr();

			sinfun();
			//printf("\n the answer is=%d",d);
			break;
		case 20:
			//COS()
			clrscr();

			cosfun();
			//printf("\n the answer is=%d",d);
		case 21:
			//TAN()
			clrscr();

			tanfun();
			//printf("\n the answer is=%d",d);
		case 22:
			//A TO F
			clrscr();
			atoffun();
			break;
		case 23:
			exit(0);
		default:
			 printf("\n Invalid choice");
	}
	goto start;
	getch();
}
/*
void add()
{
	int a,b,c;
	printf("\n enter the value:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\n the addition will be:%d",c);
}
int sub()
{
	int a,b,c;
	printf("\n enter the value:");
	scanf("%d%d",&a,&b);
	c=a-b;
	return c;
}
int mul(int a,int b)
{
	int c;
	c=a*b;
	return c;
}
void divide(int a,int b)
{
	float c;
	c=(float)a/b;
	printf("\n the division will be:%f",c);
}
void ascii()
{

	char g='b';

	printf("The ASCII value of %c=%d",g,g);
}
void prime()
{
	int a,flag=0,i;
	printf("enter the value\n");
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("\n number is prime");
	}
	else
	{
		printf("\n number is not prime");
	}
}
float ceilfun(float a)
{
	float f;
	f=ceil(a);
	return f;
}
int cuberoot(int a)
{
	int c;
	c=a*a*a;
	return c;
}
void absolute()
{
   int c,a;
   printf("enter the value\n");
   scanf("%d",&a);
   c=abs(a);
   printf("the value=%d",c);
}
void floorval()
{

	float r,h;
	printf("enter the value:\n");
	scanf("%f",&h);
	r=floor(h);
	printf("The number=%f",r);
}
void dtoh()
{
	int a;
	printf("enter the number\n");
	scanf("%d",&a);
	printf("Hexadecimal number=%x",a);
}
void dtoo()
{
	int a;
	printf("enter the number\n");
	scanf("%d",&a);
	printf("\n Octal number=%o",a);
}
void minimumfun(int a,int b)
{

			if(a<b)
			{
				printf("Smaller number=%d",a);
			}
			else
			{
				printf("Smaller number=%d",b);
			}

}
int squareroot()
{
	int a,c;
     printf("\n enter the value:");
     scanf("%d",&a);

    c=sqrt(a);
    return c;
}
void atoifun()
{

	int d;

	 char ato[SIZE]="3.15";
	d=atoi(ato);
	printf("The integer number=%d",d);
}

void modefun(int a)
{
	int i,j,k=0,mode,c=1,max=0;
	int f[20]={0},m[10]={0};
		printf("Enter the set of numbers\n");
			for (i = 0; i < a; i++)
			{
				scanf("%d", &f[i]);
			}
			for (i = 0; i < a - 1; i++)
			{
				mode = 0;
				for (j = i + 1; j < a; j++)
				{
					if (f[i] == f[j])
					{
						mode++;
					}
				}
				if ((mode > max) && (mode != 0))
				{
					k = 0;
					 max = mode;
					m[k] = f[i];
					k++;
				 }
				else if (mode == max) {
					 m[k] = f[i];
						k++;
				}
			}
				for (i = 0; i < a; i++)
				{
					if (f[i] == m[i])
					c++;
				}
				if (c == a)
				 printf("\nThere is no mode");
				else
				{
				 printf("\nMode\t= ");
				 for (i = 0; i < k; i++)
					printf("%d",m[i]);
				}
}
void dtobfun()
{
	long int quotient,decimalNumber;
	int binaryNumber[100];
	int i=1,j;

	printf("Enter any decimal number: ");
	scanf("%ld",&decimalNumber);
	quotient = decimalNumber;
	while(quotient!=0)
	{
		binaryNumber[i++]= quotient % 2;
		quotient = quotient / 2;
	}
	printf("Equivalent binary value of decimal number %d: ",decimalNumber);
	for(j = i -1 ;j> 0;j--)
	printf("%d",binaryNumber[j]);

}
void medianfun(int a)
{
	int  i,f[10];
	float l;
	printf("Enter the elements:\n");
			for(i=0;i<a;i++)
			{
			scanf("%d",&f[i]);
			}
			if(a%2==0)
			{
				l=(f[a-1/2]+(f[a/2]))/2;
			}
			else
			{
				l=f[a/2];
			}
			printf("\nMedian is %f",l);
}
void sinfun()
{
	int v,b;
	printf("\n enter the no.:");
	scanf("%d",&b);
	printf("\n answer will be:%d",sin(b));

}
void cosfun()
{
	int v,b;
	printf("\n enter the no.:");
	flushall();
	scanf("%d",&b);
	printf("the answer will be:%d",cos(b));
}
void tanfun()
{
	int u,a;
	printf("\n enter the no.:");
	scanf("%d",&a);
	u=tan(a);
	printf("\n the answer willbe:%d",u);
}
void atoffun()
{

	float t;
	char art[10]="3.15";
	t=atof(art);
	printf("The float number=%f",t);
}       */


