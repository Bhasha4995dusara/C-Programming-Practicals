
/*                      AUTHOR:BHASHA DUSHARA
			DATE OF CREATION:3 AUG 2016
			EMAIL:BHASHA_DUSARA@YAHOO.COM
			OBJECTIVE:USING PUTC GETC PUTW GETW
*/

#include<stdio.h>
#include<conio.h>
#define SIZE 10
FILE *fp1,*fp2,*fp3;

void getcfun(char*);  //definations
void putcfun(char*);
void getwfun(char*);
void putwfun(char*);

void main()
{
	char *name;
	int choice;
	clrscr();
	start:
	printf("\n 1.USING PUTC");
	printf("\n 2.USING GETC");
	printf("\n 3.USING PUTW");
	printf("\n 4.USING GETW");
	printf("\n 5.EXIT");
	printf("\n------------------------------");
	printf("\n Enter the choice:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			//using getc();
			clrscr();
			printf("\n enter the file name of getc function:");
			fflush(stdin);
			gets(name);
			putcfun(name);
			goto start;
		case 2:
			//using putc();
			clrscr();
			printf("\n enter the file you want to read:");
			fflush(stdin);
			gets(name);
			getcfun(name);
			goto start;
		case 3:
			//using getw();
			clrscr();
			printf("\n enter the file name of odd and even:");
			fflush(stdin);
			gets(name);
			putwfun(name);
			goto start;
		case 4:
			//using putw();
			clrscr();
			printf("\n enter the file name you want to read:");
			fflush(stdin);
			gets(name);
			getwfun(name);
			goto start;
		case 5:
			exit(0);
		default:
			printf("\n invalid choice");
	}
getch();
}

//defination of getc()
void putcfun(char *name1)
{
  char ch;
  int i,con=0,vo=0,space=0;

  fp1=fopen(name1,"w");
  printf("\n Please enter something on 50 words:");

  while((ch=getchar())!='\n')
  {
     putc(ch,fp1);

     if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' || ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
     {
	vo++;
	printf("\nvowels=%c",ch);
     }       //end of if
     else if(ch==' ')
     {
	space++;
	printf("\n --------------------space------------------");
     }                  //end of else if
     else
     {
	con++;
	printf("\nconsonent:%c",ch);

     }                      //end of else


  }                                      //end of function
  printf("\n------------------------------------------");
  printf("\n number of vowels are :%d",vo);
  printf("\n number of consonant are :%d",con);
  printf("\n number of space are : %d",space);
  fclose(fp1);

}

//defination of putc();
void getcfun(char *name1)
{
	char ch;
	if(fp2==NULL)
	{
		printf("\n Does not found file");
	}                     //end of if
	else
	{
	fp2=fopen(name1,"r");
	while ((ch=getc(fp2))!=EOF)
	{
	     printf("%c",ch);
	}                       //end of loop

	fclose(fp2);
	}                                   //end of function
}

//defination of getw();
void putwfun(char *name1)
{
	int a[SIZE];
	int i;
	printf("\nenter the integer element:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);             //scan the element
	}


	fp3=fopen(name1,"w");
	if(fp3==NULL)
	{
		printf("\n doesn't exist");
	}                                   //end of if
	else
	{
		for(i=0;i<SIZE;i++)
		{
			if(a[i]%2==0)
			{
				printf("\n even number= %d",a[i]);
				putw(a[i],fp3);
			}                 //end of if
			else
			{
				printf("\n odd number %d:",a[i]);
				putw(a[i],fp3);

			}                  //end of else
		}
		fclose(fp3);
	}         //end of else

}

//defination putw();
void getwfun(char *name1)
{
	int temp[SIZE],i;
	if(fp3==NULL)
	{
	 printf("\n does not found file");
	}                      //end of if
	else
	{
	fp3=fopen(name1,"r");
	for(i=0;i<SIZE;i++)
	{
	 temp[i]=getw(fp3);
	 printf("\n\t%d",temp[i]);
	}                                 //end of loop
	fclose(fp3);                                   //end of else
	}
}                                            //end of function