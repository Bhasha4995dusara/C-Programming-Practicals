/*
	AUTHOR: Dushara Bhasha
	Email_id:bhasha_dusara@yahoo.com
	Date of Creation:11 July 2016
	Objective:calculator
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	int a,b,choice,d,c=1,flag=0;
	float ce,r,t;
	char g='a';
	char ato[10]="3.15";
	int  f[20] = {0}, sum = 0, n, m[20] = {0}, k = 0, max = 0, mode;
	float x = 0.0, y = 0.0,l;
	long int decimalNumber,remainder,quotient;
	int binaryNumber[100],i=1,j;
	clrscr();
	start:
	printf("\n1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.division\n");
	printf("4.To convert ASCII Value\n");
	printf("5.Prime no. or Not\n");
	printf("6.ceil()\n");
	printf("7.Cube root\n");
	printf("8.obsolute\n");
	printf("9.floor()\n");
	printf("10.Decimal to Hexadecimal\n");
	printf("11.Decimal to Octal\n");
	printf("12.Minimum value\n");
	printf("13.Square root\n");
	printf("14.Alphabet to Int\n");
	printf("15.Alphabet to Float\n");
	printf("16.Mode\n");
	printf("17.Decimal to Binary\n");
	printf("18.midium\n");
	printf("19.Sin()\n");
	printf("20.cos()\n");
	printf("21.tan()\n");
	printf("22.exit\n");
	printf("enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			//ADDITION
			clrscr();
			printf("Enter the value of A and B\n");
			scanf("%d%d",&a,&b);
			c=a+b;
			printf("your addition=%d",c);
			break;
		case 2:
			//SUBTRACTION
			clrscr();
			printf("Enter the value of A and B\n");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf("your subtraction=%d",c);
			break;
		case 3:
			//DIVISION
			clrscr();
			printf("Enter the value of A and B\n");
			scanf("%d%d",&a,&b);
			if(b==0)
			{
				printf("plz.. enter valid number\n");
			}
			c=a/b;
			printf("your division=%d",c);
			break;
		case 4:
			//TO CONVERT ASCII VALUE
			clrscr();
			printf("Enter the character: \n");
			scanf("%c",&g);
			printf("The ASCII value of %c=%d",g,g);
			break;
		case 5:
			//PRIME OR NOT
			clrscr();
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
			break;
		case 6:
			//CEIL() FUNCTION
			clrscr();
			printf("enter the number\n");
			scanf("%f",&ce);
			r=ceil(ce);
			printf("the number=%f",r);
			break;
	       case 7:
			//CUBE ROOT
			clrscr();
			printf("enter the value\n");
			scanf("%d",&a);
			c=a*a*a;
			printf("the number=%d",c);
			break;
	       case 8:
			//ABSOLUTE VALUE
			clrscr();
			printf("enter the value\n");
			scanf("%d",&a);
			c=abs(a);
			printf("the value=%d",c);
			break;
	       case 9:
			//FLOOR() FUNCTION
			clrscr();
			printf("enter the value\n");
			scanf("%f",&ce);
			r=floor(ce);
			printf("the number=%f",r);
			break;
	       case 10:
			// D TO H
			clrscr();
			printf("enter the number\n");
			scanf("%d",&a);
			printf("Hexadecimal number=%x",a);
			break;
	       case 11:
			// D TO O
			clrscr();
			printf("enter the number\n");
			scanf("%d",&a);
			printf("Octal number=%o",a);
			break;
	       case 12:
			//MINIMUM() FUNCTION
			clrscr();
			printf("Enter the value of A and B\n");
			scanf("%d%d",&a,&b);
			if(a<b)
			{
				printf("Smaller number=%d",a);
			}
			else
			{
				printf("Smaller number=%d",b);
			}
			break;
		case 13:
			//SQUART ROOT
			clrscr();
			printf("Enter the value of A\n");
			scanf("%d",&a);
			 c=sqrt(a);
			printf("your square root=%d",c);
			break;
		case 14:
			//A TO I
			/*printf("Enter the alphabet\n");
			scanf("%c",&ch);*/
			clrscr();
			d=atoi(ato);
			printf("The integer number=%d",d);
			break;
		case 15:
			// A TO F
			/*printf("Enter the alphabet\n");
			scanf("%c",&ch);*/
			clrscr();
			t=atof(ato);
			printf("The float number=%f",t);
			break;
		case 16:
			//MOD () FUNCTION
			clrscr();

			printf("\nEnter the limit\n");
			scanf("%d", &n);
			printf("Enter the set of numbers\n");
			for (i = 0; i < n; i++)
			{
				scanf("%d", &f[i]);
			}
			for (i = 0; i < n - 1; i++)
			{
				mode = 0;
				for (j = i + 1; j < n; j++)
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
				for (i = 0; i < n; i++)
				{
					if (f[i] == m[i])
					c++;
				}
				if (c == n)
				 printf("\nThere is no mode");
				else
				{
				 printf("\nMode\t= ");
				 for (i = 0; i < k; i++)
					printf("%d",m[i]);
				}
				break;
		case 17:
			//D TO B
			clrscr();
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
			break;
		case 18:
			//MEADIAN
			printf("Enter the size of the array: ");
			scanf("%d",&n);
			printf("Enter the elements:\n");
			for(i=0;i<n;i++)
			{
			scanf("%d",&f[i]);
			}
			if(n%2==0)
			{
				l=(f[n-1/2]+(f[n/2]))/2;
			}
			else
			{
				l=f[n/2];
			}
			printf("\nMedian is %f",l);

			break;
		case 19:
			//sin()
			clrscr();
			printf("\n enter the number:");
			scanf("%d",&a);
			c=sin(a);
			printf("\n answer is:%d",c);
			break;
		case 20:
			//cos()
			clrscr();
			printf("\n enter the number:");
			scanf("%d",&a);
			c=cos(a);
			printf("\n answer is:%d",c);
			break;
		case 21:
			//tan()
			clrscr();
			printf("\n enter the number:");
			scanf("%d",&a);
			c=tan(a);
			printf("\n answer is:%d",c);
			break;

		default:
			exit(0);

		/*default:
			printf("INVALID CHOICE");  */

	}//end switch case
	goto start;
getch();

}


/* do not show choice 4 (printf statement) in switch case but in single program it will run give proper output....*/