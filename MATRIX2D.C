/*	Author : Sharma Vinay
	Email  : vinaysharma4362@gmail.com
	Date of creation : 19 july 2016
	Objective : Learn Multidimensional array
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 80
void main()
{
	int a[SIZE][SIZE];
	int b[SIZE][SIZE];
	int c[SIZE][SIZE];
	int i,j,k;
	int r1,r2,c1,c2,r3,c3,raw,tmp=0,choice;
	clrscr();
	printf("Enter your choice :=");
	printf("\n---------------------------------------");
	printf("\n1.....Addition of matrix");
	printf("\n2.....Multiplication of matrix\n");
	printf("---------------------------------------\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1://Matrix Addition
			start:
			printf("\nEnter no of rows and cols for first matrix : \n");
			scanf("%d %d",&r1,&c1);
			printf("\nEnter no of rows and cols for second matrizx : \n");
			scanf("%d %d",&r2,&c2);
			if(r1!=r2 || c1!=c2)
			{
				printf("\nInvalid matrix.... Try again !!!\n");
				goto start;
			}//End of if checking condition
			printf("\nEnter the %d elements of 1st matrix\n",r1*c1);
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					scanf("%d",&a[i][j]);
				}//End of inner for loop
			}//End of outer for loop
			printf("\nEnter the  %d elements of 2nd matrix\n",r2*c2);
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					scanf("%d",&b[i][j]);
				}//End of for inner loop
			}//End of for outer loop
			printf("\nAddition of matrix is :\n");
			printf("-------------------------------\n");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
				   c[i][j] = a[i][j]+b[i][j];
				}//End of inner for loop
			}//End of outer for loop
			for(i=0;i<r1;i++)
			{
				printf("|");
				for(j=0;j<c1;j++)
				{
					printf("%2d ",a[i][j]);
				}//End of for loop
				printf( "|");
				if(i==r1/2)
				printf(" + ");
				else
				printf("   ");
				printf("|");

				for(j=0;j<c1;j++)
				{
					printf("%2d ",b[i][j]);
				}//End of for loop
				printf( "|");

				if(i==r1/2)
				printf(" = ");
				else
				printf("   ");
				printf("|");

				for(j=0;j<c1;j++)
				{
					printf("%2d ",c[i][j]);
				}//End of for loop
				printf( "|\n");
			}//End of outer for loop
			break;

		case 2://Matrix multiplication
			printf("\nEnter no of rows and cols of first matrix :\n");
			scanf("%d %d",&r1,&c1);
			printf("\nEnter no of rows and cols of second matrizx :\n");
			scanf("%d %d",&r2,&c2);
			if(c1!=r2)
			{
				printf("\nInvalid matrix for multiplication...Try again !!!\n");
			}//End of if
			printf("\nEnter the %d elements of 1st matrix\n",r1*c1);
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					printf("Enter element a%d%d: ",i+1,j+1);
					scanf("%d",&a[i][j]);
				}//End of inner for loop
			}//End of outer for loop
			printf("\nEnter the  %d elements of 2nd matrix\n",r2*c2);
			for(i=0;i<r2;i++)
			{
				for(j=0;j<c2;j++)
				{
					printf("Enter element a%d%d: ",i+1,j+1);
					scanf("%d",&b[i][j]);
				}//End of inner for loop
			}//End of outer for loop
			printf("\nMultiplication of Matrix is :\n");
			printf("-------------------------------------\n");
			r3=r1;
			c3=c2;
			for(i=0;i<r3;i++)
			{
				for(j=0;j<c3;j++)
				{
					tmp=0;
					for(k=0;k<c2;k++)
					{
						tmp=tmp+a[i][k]*b[k][j];
					}//End of inner for loop
					c[i][j]=tmp;
					printf("%2d ",tmp);
				}//End of inner for loop
				printf("\n");
			}//End of outer for loop
			if(r1>r2)
			raw=r1;
			else
			raw=r2;
			printf("\n\n");
			for(i=0;i<raw;i++)
			{
				printf("|");
				for(j=0;j<c1;j++)
				{
					if(i>r1-1)
					printf("  ");
					else
					printf("%d ",a[i][j]);
				}//End of for inner loop

				printf( "|");

				if(i==raw/2)
				printf(" * ");
				else
				printf("   ");
				printf("|");

				for(j=0;j<c2;j++)
				{
					if(i>r2-1)
					printf("  ");
					else
					printf("%d ",b[i][j]);
				}//End of for inner loop
				printf( "|");

				if(i==raw/2)
				printf(" = ");
				else
				printf("   ");
				printf("|");

				for(j=0;j<c3;j++)
				{
					if(i>r3-1)
					printf("  ");
					else
					printf("%d ",c[i][j]);
				}//End of for inner loop
				printf( "|\n");
			}//End of for outer loop
			break;
	}//End of switch case
getch();
}//End of main