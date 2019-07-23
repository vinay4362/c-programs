/*	Author : Sharma Vinay
	Email  : vinaysharma4362@gmail.com
	Date of creation : 14 july 2016
	Objective : Learn different types of pattern */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,line,ch,k,m,n,space,coef=1;
	int pas[50];
	char c;
	clrscr();
	printf("\nPlease select your pattern :");
	printf("\n-----------------------------------");
	printf("\n1.....Pascal triangle");
	printf("\n2.....Equalator triangle");
	printf("\n3.....Square");
	printf("\n4.....Ractangle");
	printf("\n5.....Inverse(Right angle triangle");
	printf("\n6.....Isosceles triangle");
	printf("\n-----------------------------------\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1://Pascal Triangle
			printf("\n-----------------------------------");
			printf("\nEnter the no. of lines :");
			scanf("%d",&line);
			printf("\n-----------------------------------\n");
			for(i=0;i<line;i++)
			{
				for(space=1;space <=line-i;space++)
				{
					printf(" ");
				}//End of inner first for loop
				for(j=0;j<=i;j++)
				{
					if(j==0 || i==0)
					{
						coef=1;
					}
					else
					{
						coef = coef*(i-j+1)/j;
					}
					printf("%4d", coef);
				}//End of inner second for loop
				printf("\n");
			}//End of outer for loop
			break;
//----------------------------------------------------------------------------------------
		case 2://Equilateral Triangle
			printf("\n-----------------------------------");
			printf("\nEnter the no. of lines :");
			scanf("%d",&line);
			printf("\nEnter the character type:\n");
			//scanf("%c",&c);
			c=getch();
			printf("\n-----------------------------------\n");
			for(i=1;i<=line;i++)
			{
				for(j=1;j<=line-i;j++)
				{
					printf(" ");
				}//End of inner first for loop
				for(k=1;k<=(2*i)-1;k++)
				{
					printf("%c",c);
				}//End of inner second for loop
				printf("\n");
			}//End of outer for loop
			break;
//-----------------------------------------------------------------------------------------------
		case 3://Square
			printf("\n-----------------------------------");
			printf("\nEnter the no. of lines :");
			scanf("%d",&line);
			printf("\nEnter the character type:\n");
			//scanf("%c",&c);
			c=getch();
			printf("\n-----------------------------------\n");
			for(i=1;i<=line;i++)
			{
				for(j=1;j<=line;j++)
				{
					printf("%c ",c);
				}//End of inner for loop
				printf("\n");
			}//End of outer for loop
			break;
//--------------------------------------------------------------------------------------------
		case 4://Rectangle
			printf("\n-----------------------------------\n");
			printf("Enter number of row:");
			scanf("%d",&m);
			printf("Enter number of columns :");
			scanf("%d",&n);
			printf("\nEnter the character type:\n");
			//scanf("%c",&c);
			c=getch();
			printf("\n-----------------------------------\n");
			for(i=1;i<=m;i++)
			{
				for(j=1;j<=n;j++)
				{
					printf("%c ",c);
				}//End of inner for loop
				printf("\n");
			}//End of outer for loop
			break;
//------------------------------------------------------------------------------------------
		case 5://Inverse(Right angle triangle)
			printf("\n-----------------------------------");
			printf("\nEnter the no. of lines :");
			scanf("%d",&line);
			printf("\nEnter the character type:\n");
			//scanf("%c",&c);
			c=getch();
			printf("\n-----------------------------------\n");
			for(i=1;i<=line;i++)
			{
				for(j=line;j>=i;j--)
				{
					printf("%c",c);
				}//End of inner first for loop
				printf("\n");
				for(k=1;k<=i;k++)
				{
					printf(" ");
				}//End of inner second for loop
			}//End of outer for loop
			break;
//-----------------------------------------------------------------------------------------------
		case 6://Isosceles Triangle
			printf("\n-----------------------------------");
			printf("\nEnter the no. of lines :");
			scanf("%d",&line);
			printf("\nEnter the character type:\n");
			//scanf("%c",&c);
			c=getch();
			printf("\n-----------------------------------\n");
			for(i=1;i<=line;i++)
			{
				for(k=line;k>=i;k--)
				{
					printf(" ");
				}//End of inner first for loop
				for(j=1;j<=i;j++)
				{
					printf("%c",c);
					printf(" ");
				}//End of inner second for loop
				printf("\n");
			}//End of outer for loop
			break;
	}//End of switch
getch();
}//End of main