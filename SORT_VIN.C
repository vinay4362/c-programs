/*	Author : Sharma Vinay
	Email  : vinaysharma4362@gmail.com
	Date of creation : 18 july 2016
	Objective : Learn Sorting of an array */
#include<stdio.h>
#include<conio.h>
#define SIZE 4
void main()
{
	int a[SIZE];
	int i,j,temp,k,count,choice;
	char ch,input[100],output[100];
	int no[26]={0},n,c,t,x;
	clrscr();
	printf("Enter your choice :=");
	printf("\n--------------------------------------");
	printf("\n1.....Ascending order sort array");
	printf("\n2.....descending order sort array");
	printf("\n3.....Character sort array");
	printf("\n--------------------------------------\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: //For ascending order sort
			printf("\n--------------------------------------");
			for(i=0;i<SIZE;i++)
			{
				printf("\nEnter the value of %d array :",SIZE);
				scanf("%d",&a[i]);
			}//End of for loop
			printf("\nThe array before sorting \n");
			for(i=0;i<SIZE;i++)
			{
				printf("%d\t",a[i]);
			}//End of for loop
			for(i=0;i<SIZE;i++)
			{
				count=0;
				printf("\n");
				for(j=0;j<SIZE-1;j++)
				{
					if(a[j]>a[j+1])
					{
						count=count+1;
					}//End of if
					if(count ==0 )
					goto exit;

				}//End of for loop
				printf("\n pass%d\ncnt= %d ",i+1,count);
				for(j=0;j<SIZE-1;j++)
				{
					if(a[j]>a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}//End of if for swap
				}//End of for loop
				for(k=0;k<SIZE;k++)
				{
					printf("%2d,",a[k]);
				}//End of for loop
				printf("\n");
			}//End of outer for loop

			exit:
			printf("\nArray after sorting \n");
			printf("--------------------------------------\n");
			for(i=0;i<SIZE;i++)
			{
				printf("%d\t",a[i]);
			}//End of for loop
			break;
//-------------------------------------------------------------------------------------------------
		case 2: //For decending order sort
			printf("\n--------------------------------------");
			for(i=0;i<SIZE;i++)
			{
				printf("\nEnter the value of %d array :",SIZE);
				scanf("%d",&a[i]);
			}//End of for loop
			printf("\nThe array before sorting \n");
			for(i=0;i<SIZE;i++)
			{
				printf("%d\t",a[i]);
			}//End of for loop
			for(i=0;i<SIZE;i++)
			{
				count=0;
				printf("\n");
				for(j=0;j<SIZE-1;j++)
				{
					if(a[j]<a[j+1])
					{
						count=count+1;
					}//End of for loop
					if(count ==0 )
					goto exit;

				}//End of for loop
				printf("\n pass%d\ncnt= %d ",i+1,count);
				for(j=0;j<SIZE-1;j++)
				{
					if(a[j] < a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}//End of if for swap
				}//End of for loop
				for(k=0;k<SIZE;k++)
				{
					printf("%2d",a[k]);
				}//End of for loop
				printf("\n");
			}//End of outer for loop
			printf("\nArray after sorting ");
			printf("\n--------------------------------------\n");
			for(i=0;i<SIZE;i++)
			{
				printf("%d\t",a[i]);
			}//End of for loop
			break;
//--------------------------------------------------------------------------------------------------
		case 3: //Character sort
			printf("\n--------------------------------------");
			printf("\nEnter text :\n");
			scanf("%s",input);
			n=strlen(input);
			for(c=0;c<n;c++)
			{
				ch=input[c]-'a';
				no[ch]++;
			}//End of for loop
			t=0;
			for(ch='a';ch<='z';ch++)
			{
				x=ch-'a';
				for(c=0;c<no[x];c++)
				{
					output[t]=ch;
					t++;
				}//End of inner for loop
			}//End of outer for loop
			output[t]='\0';
			printf("\n--------------------------------------\n");
			printf("%s\n",output);
	}//End of choice
getch();
}//End of main

