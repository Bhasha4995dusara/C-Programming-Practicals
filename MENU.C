/* 	AUTHOR:BHASHA DUSHARA
	DATE OF CREATION: 13 JULY 2016
	EMAIL:BHASHA_DUSARA@YAHOO.COM
	OBJECTIVE:FOOD MENU DRIVEN PROGRAM
*/
#include<stdio.h>
#include<conio.h>
#define md 100
#define sd 70
#define id 50
#define ph 90
#define pt 100
#define sp 150
#define cm 60
#define cr 70
#define cn 100
#define kh 50
#define dh 50
#define pa 50

			//MAIN START
void main()
{
	int choice,ch,qu=0,total=0,sum=0,sum1=0,sum2=0,sum3=0;
	int to1=0,to2=0,to3=0,to4=0,to5=0,m,quantity=0;
	int to6=0,to7=0,to8=0,to9=0,to10=0,to11=0,to12=0;
	char c;
	clrscr();
	start:
	printf("\n 1.south indian");
	printf("\n 2.panjabi");
	printf("\n 3.cheness");
	printf("\n 4.gujarati");
	printf("\n 5.Billing");
	printf("\n 6.exit");
	printf("\n----------------------------");
	printf("\nenter the choice from menu:");
	scanf("%d",&choice);
	switch(choice)                //SWITCH CASE 1
	{
		case 1:

		       printf("\n1.masala dhosa......100");
		       printf("\n2.simple dhosa.......70");
		       printf("\n3.idle.......50");
		       printf("\n4.exit");
		       printf("\n------------------------");
		       printf("\n choice your dish:");
		       scanf("%d",&ch);
		       switch(ch)                    //SWITCH CASE 2
		       {
			case 1:
				printf("\n Enter your masala dhosa quantity:");
				scanf("%d",&qu);
				sum=qu;
				to1=qu*md;
				printf("\ndo u want any more:");
				flushall();
				scanf("%c",&c);
				if(c=='y' || c=='Y')
				{
					clrscr();
					goto start;
				}
				else
				{
					goto bill;
				}


			case 2:
				printf("\n enter your simple dhosa quantity:");
				scanf("%d",&qu);
				sum=qu;
				to2=qu*sd;
				printf("\ndo u want any more:");
				flushall();
				scanf("%c",&c);
				if(c=='y' || c=='Y')
				{
					clrscr();
					goto start;
				}
				else
				{
					goto bill;
				}


			case 3:
				printf("\n enter your idelee quantity:");
				scanf("%d",&qu);
				sum=qu;
				to3=qu*id;
				printf("\ndo u want any more:");
				flushall();
				scanf("%c",&c);
				if(c=='y' || c=='Y')
				{
					clrscr();
					goto start;
				}
				else
				{
					goto bill;
				}

			case 4:
				exit(0);
			default:
				printf("\n Invalid choice");
			break;
			}                  //END SWITCH CASE 2
	      case 2:
			printf("\n1.panner handi......90");
			printf("\n2.paneer tava......100");
			printf("\n3.special dish for resturent.....150");
			printf("\n4.exit");
			printf("\n----------------------------");
			printf("\nchoice your dish:");
			scanf("%d",&ch);
		       switch(ch)                             //START SWITCH CASE 3
			{
				case 1:
					printf("\nenter your paneer handi quantity: ");
					scanf("%d",&qu);
					sum1=qu;
					to4=qu*ph;

					printf("\ndo u want any more:");
					flushall();
					scanf("%c",&c);
					if(c=='y' || c=='Y')
					{
						clrscr();
						goto start;
					}
					else
					{
						goto bill;
					}


				case 2:
					printf("\nenter your paneer tava quantity: ");
					scanf("%d",&qu);
					sum1=qu;
					to5=qu*pt;
					printf("\ndo u want any more:");
					flushall();
					scanf("%c",&c);
					if(c=='y' || c=='Y')
					{
						clrscr();
						goto start;
					}
					else
					{
						goto bill;
					}


				case 3:
					printf("\n enter your special dish quantity:");
					scanf("%d",&qu);
					sum1=qu;
					to6=qu*sp;
					printf("\ndo u want any more:");
					flushall();
					scanf("%c",&c);
					if(c=='y' || c=='Y')
					{
						clrscr();
						goto start;
					}
					else
					{
						goto bill;
					}


				case 4:
					exit(0);
				default:
					printf("\nInvalid choice");
			break;
			}                             //END SWITCH CASE 3
	      case 3:
			printf("\n1.manchuriyan.....60");
			printf("\n2.noodles......70");
			printf("\n3.rice.......100");
			printf("\n4.exit");
			printf("\n-----------------------------------");
			printf("\nchoice your dish:");
			scanf("%d",&ch);
			switch(ch)                       //START SWITCH CASE 4
			{
				case 1:
					printf("\n enter your manchuriyan chinese quantity:");
					scanf("%d",&qu);
					sum2=qu;
					to7=qu*cm;
					printf("\ndo u want any more:");
					flushall();
					scanf("%c",&c);
					if(c=='y' || c=='Y')
					{
						clrscr();
						goto start;
					}
					else
					{
						goto bill;
					}


				case 2:
					printf("\n enter your chinese noodles quantity:");
					scanf("%d",&qu);
					sum2=qu;
					to8=qu*cn;
					printf("\ndo u want any more:");
					flushall();
					scanf("%c",&c);
					if(c=='y' || c=='Y')
					{
						clrscr();
						goto start;
					}
					else
					{
						goto bill;
					}

				case 3:
					printf("\n enter your chinese rice quantity:");
					scanf("%d",&qu);
					sum2=qu;
					to9=qu*cr;
					printf("\ndo u want any more:");
					flushall();
					scanf("%c",&c);
					if(c=='y' || c=='Y')
					{
						clrscr();
						goto start;
					}
					else
					{
						goto bill;
					}

				case 4:
					exit(0);
				default:
					printf("\n Invalid choice");
			break;
			}                            //END SWITCH CASE 4
		 case 4:
			printf("\n1.Khandvi......50");
			printf("\n2.Dhokda.......50");
			printf("\n3.patra........50");
			printf("\n4.exit");
			printf("\n------------------------------");
			printf("\nchoice your dish:");
			scanf("%d",&ch);
			switch(ch)                                 //START SWITCH CASE 5
			{
			   case 1:
				   printf("\nenter your khandvi quantity:");
				   scanf("%d",&qu);
				   sum3=qu;
				   to10=qu*kh;
				   printf("\ndo u want any more:");
				   flushall();
				   scanf("%c",&c);
				   if(c=='y' || c=='Y')
				   {
					clrscr();
					goto start;
				   }
				   else
				   {
					goto bill;
				   }


			   case 2:
				   printf("\nenter your dhokda quantity:");
				   scanf("%d",&qu);
				   sum3=qu;
				   to11=qu*dh;
				   printf("\ndo u want any more:");
				   flushall();
				   scanf("%c",&c);
				   if(c=='y' || c=='Y')
				   {
					clrscr();
					goto start;
				   }
				   else
				   {
					goto bill;
				   }


			   case 3:
				   printf("\nenter your patra quantity:");
				   scanf("%d",&qu);
				   sum3=qu;
				   to12=qu*pa;
				   printf("\ndo u want any more:");
				flushall();
				scanf("%c",&c);
				if(c=='y' || c=='Y')
				{
					clrscr();
					goto start;
				}
				else
				{
					goto bill;
				}


			   case 4:
				   exit(0);
			   default:
				   printf("\nInvalid choice");
			break;
			}                                         //END SWITCH CASE 5




	      case 6:
			exit(0);
	      default:
			printf("\n Invalid choice");
	   }
	    //END SWITCH CASE 1

	       bill:
			clrscr();
			printf("\n do u want to bill now if 'yes' to press 1:");
			scanf("%d",&m);
			if(m==1)
			{        printf("\n--------------------------------------------------");

				quantity=sum+sum1+sum2+sum3;
				printf("\n \t Quantity:%d",quantity);
				total=to1+to2+to3+to4+to5+to6+to7+to8+to9+to10+to11+to12;
				printf("\n \t Bill:%d",total);
				printf("\n---------------------------------------------------");

			}




getch();
}                               //MAIN END