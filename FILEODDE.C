/*                      AUTHOR:BHASHA DUSHARA
			DATE OF CREATION:01 AUG 2016
			EMAIL:BHASHA_DUSARA@YAHOO.COM
			OBJECTIVE:USING FILE FIND ODD EVEN AND PRIME
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 10
void main()
{
	FILE *fp1,*fp2,*fp3,*fp4;
	int i,a[10],j,c,count,sum;
	char name1[10],odd[10],even[10],prime[10];
	clrscr();
	printf("\nenter the element:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);             //scan the element
	}
	start:
	flushall();
	printf("\nenter the file name you want to create:");
	gets(name1);
	fp1=fopen(name1,"w");        //file open

	even:
	printf("\nenter the even file name:");
	gets(even);
	fp2=fopen(even,"w");          //file open for even

	odd:
	printf("\n enter the odd file name:");
	gets(odd);
	fp3=fopen(odd,"w");             //file open for odd

	prime:
	printf("\n enter the prime number file:");
	gets(prime);
	fp4=fopen(prime,"w");                      //file open for prime number
	//for comman file
	if(fp1==NULL)
	{
		  printf("\n file has not been create");
		  goto start;

	}                             //if end
	else
	{
		fprintf(fp1,"\n numbers are:%d",a[i]);
	}    			//else end
	//for even file
	if(fp2==NULL)
	{
		  printf("\n file has not been create");
		  goto even;

	}                                 //if end
	else
	{
		for(i=0;i<10;i++)
		{
		if(a[i]%2==0)
		{

			fprintf(fp2,"even number:%d",a[i]);
		}

	     }                            //for loop end
	}                         //else end
	//for odd file
	if(fp3==NULL)
	{
		  printf("\n file has not been create");
		   goto odd;

	}                                   //if end
	else
	{

	for(i=0;i<10;i++)
	{
		if(a[i]%2==1)
			{
			fprintf(fp3,"odd number:%d",a[i]);
			}
	}
       }                  //else end
       //for prime number file
       if(fp4==NULL)
       {
		printf("\n prime file not create");
		goto prime;
       }                            //if end
       else
       {
	count=0;
	//printf("\nprime numbers are:\n");
	for(i=0;i<10;i++)
	{
		c=0;
		for(j=2;j<a[i];j++)
		{
		if(a[i]%j==0)
		{
		   c=1;
		   break;
		}
		}
	 if(c==0)
	 {
	    fprintf(fp4,"prime number:%d\t",a[i]);
	 }

	}                    // forloop end

}                       //else end

	fclose(fp1);    //close the comman file
	fclose(fp2);    //close the even file
	fclose(fp3);      //close the odd file
	fclose(fp4);       //close the prime number file
getch();
}
   //main end
