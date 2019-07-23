/*	Name : Sharma Vinay
	Email: vinaysharma4362@gmail.com
	Date : 16 july 2016
	Topic: Learn Array
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main()
{
	int i,j,flag,sum=0,count,largest,min;
	float avg = 0.0;
	int a[SIZE];
	int b[SIZE];
	int c[SIZE];
	int choice;
	clrscr();
	printf("--------------------------------");
	printf("\n1.....Addition of EVEN places ");
	printf("\n2.....Addition of Odd places ");
	printf("\n3.....Addition of all PRIME numbers");
	printf("\n4.....Maximum value of the Array");
	printf("\n5.....Minimum value of the Array");
	printf("\n6.....AVERAGE of an array ");
	printf("\n--------------------------------");
	printf("\nEnter the choice :");
	scanf("%d",&choice);
	printf("\n--------------------------------");
	printf("\nFirst array :\n");
	for(i=0;i<SIZE;i++)
	{
		printf("Enter the %d values of an array :",SIZE);
		scanf("%d",&a[i]);
	}//End of first array for loop
	printf("\n--------------------------------");
	printf("\nSecond array :\n");
	for(i=0;i<SIZE;i++)
	{
		printf("Enter the %d values of an array :",SIZE);
		scanf("%d",&b[i]);
	}//End of second array for loop
	switch(choice)
	{
		case 1: //Addition of Even places
			for(i=0;i<SIZE;i++)
			{
				c[i]=a[i]+b[i];
			}//End of addition for loop
			printf("\n--------------------------------");
			printf("\nAddition is as follow :\n");
			for(i=0;i<SIZE;i++)
			{
				if(i%2 == 0)
				{
				  //	printf("The additon ofa[%d]   + \tb[%d]   = \tc[%d]\n",a[i],b[i],c[i]);
					printf("The additon ofa[%d]\t%d   + b[%d]\t%d   = \tc[%d]\t%d\n",i,a[i],i,b[i],i,c[i]);
				}//End of if condition for even places
			}//End of for loop
			break;
//--------------------------------------------------------------------------------------
		case 2: //Addition of odd places
			for(i=0;i<SIZE;i++)
			{
				c[i]=a[i]+b[i];
			}//End of addition for loop
			printf("\n--------------------------------");
			printf("\nAddition is as follow :\n");
			for(i=0;i<SIZE;i++)
			{
				if(i%2 != 0)
				{
				  //	printf("The additon ofa[%d]   + \tb[%d]   = \tc[%d]\n",a[i],b[i],c[i]);
					printf("The additon ofa[%d]\t%d   + b[%d]\t%d   = \tc[%d]\t%d\n",i,a[i],i,b[i],i,c[i]);
				}//End of if condition for odd places
			}
			break;
//----------------------------------------------------------------------------------
	       case 3://Addition of all prime numbers
			for(i=0;i<SIZE;i++)
			{
				c[i]=a[i]+b[i];
			}//End of addition for loop
			for(i=0;i<SIZE;i++)
			{
				  //	printf("The additon ofa[%d]   + \tb[%d]   = \tc[%d]\n",a[i],b[i],c[i]);
					printf("The additon ofa[%d]\t%d   + b[%d]\t%d   = \tc[%d]\t%d\n",i,a[i],i,b[i],i,c[i]);
			}
			count=0;
			for(i=0;i<SIZE;i++)
			{
				for(j=2;j<c[i];j++)
				{
					if(c[i]%j==0)
					{
						flag=1;
						break;
					}
					else
					{
						flag=0;
					}
				}

				if(flag==0)
				{
					printf("%d\t",c[i]);
					sum=sum+c[i];
					count++;
				}
			}
			printf("\nThe sum of prime no. is : %d",sum);
			break;
//-----------------------------------------------------------------------------------------------------
	       case 4: //Find the maximum value of the array
			for(i=0;i<SIZE;i++)
			{
				c[i]=a[i]+b[i];
			}//End of addition for loop
			for(i=0;i<SIZE;i++)
			{
				  //	printf("The additon ofa[%d]   + \tb[%d]   = \tc[%d]\n",a[i],b[i],c[i]);
					printf("The additon ofa[%d]\t%d   + b[%d]\t%d   = \tc[%d]\t%d\n",i,a[i],i,b[i],i,c[i]);
			}
			largest=c[0];
			for(i=0;i<c[i];i++)
			{
				if(c[i]>largest)
				{
					largest = c[i];
				}
			}
			printf("\n Largest Element :%d",largest);
			break;
//------------------------------------------------------------------------------------------
	       case 5://Find the minimum value of the array
			for(i=0;i<SIZE;i++)
			{
				c[i]=a[i]+b[i];
			}//End of addition for loop
			for(i=0;i<SIZE;i++)
			{
				  //	printf("The additon ofa[%d]   + \tb[%d]   = \tc[%d]\n",a[i],b[i],c[i]);
					printf("The additon ofa[%d]\t%d   + b[%d]\t%d   = \tc[%d]\t%d\n",i,a[i],i,b[i],i,c[i]);
			}
			min=c[0];
			for(i=0;i<c[i];i++)
			{
				if(c[i]<min)
				{
					min = c[i];
				}
			}
			printf("\n Smallest Element :%d",min);
			break;
//------------------------------------------------------------------------------------------------
		 case 6://Average of an array
			for(i=0;i<SIZE;i++)
			{
				c[i]=a[i]+b[i];
			}//End of addition for loop
			for(i=0;i<SIZE;i++)
			{
				  //	printf("The additon ofa[%d]   + \tb[%d]   = \tc[%d]\n",a[i],b[i],c[i]);
					printf("The additon ofa[%d]\t%d   + b[%d]\t%d   = \tc[%d]\t%d\n",i,a[i],i,b[i],i,c[i]);
			}
			for(i=0;i<SIZE;i++)
			{
				sum=sum+c[i];
			}
			avg =(float)sum/SIZE;
			printf("\nThe sum of elements =%d",sum);
			printf("\nThe average of elements =%f",avg);
			break;
	}
getch();
}



