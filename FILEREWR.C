/*                      AUTHOR:BHASHA DUSHARA
			DATE OF CREATION:01 AUG 2016
			EMAIL:BHASHA_DUSARA@YAHOO.COM
			OBJECTIVE:USING FILE WRITE AND READ
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 10
void readfun(char*);         //declaration for read
void writefun(char*);                 //declartion for write
FILE *fp1,*fp2;               //Globally declare a file pointers
void main()
{

	int i,choice,x;
	char name[SIZE],text;
	char  *name1;
	name1=name;
	clrscr();
	str:
	str1:
	printf("\n-------------------------------");
	printf("\n 1.Write");
	printf("\n 2.Read ");
	printf("\n 3.Exit");
	printf("\n enter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			//for file write
			printf("\n write the file");
			printf("\n Enter the write file name:");
			fflush(stdin);
			gets(name1);
			writefun(name1);
			goto str;
		case 2:
			//for file read
			printf("\n ---------------------read the file---------------");
			printf("\n enter the file you want to read now:");
			fflush(stdin);
			gets(name1);
			readfun(name1);
			goto str1;
		case 3:
			//for exit
			exit(0);
		default:
			printf("\n Invalid choice");
	}
	getch();
}

		void writefun(char *name)      //write function start
		{


			fp1=fopen(name,"w");
			if(fp1==NULL)
			{
				printf("\n doesn't create");

			}
			else
			{
				fprintf(fp1,"%s\t%d","bhasha",10);
			}
			fclose(fp1);
		}                                  //write end


		void readfun(char *name1)   //read function start
		{
			int x;
			char text[30];

			fp2=fopen(name1,"r");
			if(fp2==NULL)
			{
			    printf("\n not found");
			}
			else
			{
				fscanf(fp2,"%s%d",text,&x);
				printf("the content are: %s\t%d",text,x);
			}
		}                                        //read function end


