/*                      AUTHOR:BHASHA DUSHARA
			DATE OF CREATION:15 JULY 2016
			EMAIL:BHASHA_DUSARA@YAHOO.COM
			OBJECTIVE:ARRAY
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main() 		//MAIN START
{
    int a[SIZE];
    int c[SIZE];
    int b[SIZE];
    int i,ch,max,j,min,avg=0,sum=0,count=0,d=0;
    clrscr();
    start:
    printf("\n----------------------------------");
    printf("\n1.ADDITION OF EVEN NUMBERS");
    printf("\n2.ADDITION OF ODD NUMBERS");
    printf("\n3.ADDITION OF ALL PRIME NUMBERS");
    printf("\n4.MAXIMUM VALUE");
    printf("\n5.MINIMUM VALUE");
    printf("\n6.AVERAGE OF ARRAY");
    printf("\n7.Exit");
    printf("\n Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
	case 1:
		for(i=0;i<SIZE;i=i+2)  //LOOP1 START
		{
			printf("Enter the a[%d]=",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<SIZE;i=i+2)           //LOOP2 START
		{
			printf("Enter the b[%d]=",i);
			scanf("%d",&b[i]);
		 }
		for(i=0;i<SIZE;i=i+2)            //LOOP3 START
		{
			c[i]=a[i]+b[i];
			printf("\nthe addition of a[%d]:%d+b[%d]:%d = c[%d]:%d",i,a[i],i,b[i],i,c[i]);
		}

		goto start;
	case 2:
		for(i=1;i<SIZE;i=i+2)  //LOOP1 START
		{
			printf("Enter the a[%d]=",i);
			scanf("%d",&a[i]);
		}
		for(i=1;i<SIZE;i=i+2)           //LOOP2 START
		{
			printf("Enter the b[%d]=",i);
			scanf("%d",&b[i]);
		 }
		for(i=1;i<SIZE;i=i+2)            //LOOP3 START
		{
			c[i]=a[i]+b[i];
			printf("\nthe addition of a[%d]:%d+b[%d]:%d = c[%d]:%d",i,a[i],i,b[i],i,c[i]);
		}

		goto start;
	case 3:
		for(i=0;i<SIZE;i++)  //LOOP1 START
		{
			printf("Enter the a[%d]=",i);
			scanf("%d",&a[i]);
		}
		printf("\nprime numbers are:\n");
		for(i=0;i<SIZE;i++)       //LOOP2 START
		 {

			for(j=2;j<a[i];j++)        //LOOP3 START
			{
				if(a[i]%j==0)
				{
					d=1;
					break;
				}
			}                        //LOOP3 END
			if(d==0)
			{
				printf("%d\t",a[i]);
				sum=sum+a[i];
				count++;

			}

		  }                                  //LOOP2 END
			//printf("\nThe number of prime numbers is %d",count);
			printf("\nThe sum of prime no. is %d",sum);
			goto start;
	case 4:
		for(i=0;i<SIZE;i++)  //LOOP1 START
		{
			printf("Enter the a[%d]=",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<SIZE;i++)           //LOOP2 START
		{
			printf("Enter the b[%d]=",i);
			scanf("%d",&b[i]);
		 }
		 for(i=0;i<SIZE;i++)       //LOOP3 START
		 {
			c[i]=a[i]+b[i];
			printf("\nthe addition of a[%d]:%d+b[%d]:%d = c[%d]:%d",i,a[i],i,b[i],i,c[i]);
		 }                          //LOOP3 END
		 max=c[0];
		 for(i=0;i<SIZE;i++)          //LOOP4 START
		 {
			if(c[i]>max)
			{
				max=c[i];
			}
		 }                            //LOOP4 END
		 printf("maximum value will=%d",max);
		 goto start;
	case 5:
		 for(i=0;i<SIZE;i++)  //LOOP1 START
		{
			printf("Enter the a[%d]=",i);
			scanf("%d",&a[i]);
		}                         //LOOP1 END
		for(i=0;i<SIZE;i++)           //LOOP2 START
		{
			printf("Enter the b[%d]=",i);
			scanf("%d",&b[i]);
		 }                             //LOOP2 END
		 for(i=0;i<SIZE;i++)           //LOOP3 START
		 {
			c[i]=a[i]+b[i];
			printf("\nthe addition of a[%d]:%d+b[%d]:%d = c[%d]:%d",i,a[i],i,b[i],i,c[i]);
		 }                                 //LOOP3 END
		 min=c[0];
		 for(i=0;i<SIZE;i++)               //LOOP4 START
		 {
			if(c[i]<min)
			{
				min=c[i];
			}
		 }                                     //LOOP4 END
		 printf("minimum value will=%d",min);
		 goto start;
	case 6:
		 for(i=0;i<SIZE;i++)  //LOOP1 START
		{
			printf("Enter the a[%d]=",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<SIZE;i++)           //LOOP2 START
		{
			printf("Enter the b[%d]=",i);
			scanf("%d",&b[i]);
		 }
		 for(i=0;i<SIZE;i++)        //LOOP3 START
		 {
			c[i]=a[i]+b[i];
			printf("\nthe addition of a[%d]:%d+b[%d]:%d = c[%d]:%d",i,a[i],i,b[i],i,c[i]);
			sum=sum+c[i];
		 }                                       //LOOP3 END

		 avg=sum/5;
		 printf("\n Average is=%d",avg);
		 goto start;
	case 7:
		exit(0);
	default:
		printf("\n Invalid choice");
    }//switch case end
getch();
}   //MAIN END
