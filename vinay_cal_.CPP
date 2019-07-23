/*	Name : Sharma Vinay
	Email: vinaysharma4362@gmail.com
	Date : 11 july 2016
	Topic: Learn basic calculator
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int choice;
	clrscr();
	printf("\n1.....Add");
	printf("\n2.....Sub");
	printf("\n3.....Mul");
	printf("\n4.....Div");
	printf("\n5.....Root");
	printf("\n6.....Cube");
	printf("\n7.....Decimal to Hexadecimal");
	printf("\n8.....Decimal to Binary");
	printf("\n9.....Decimal to octal");
	printf("\n10.....Absolute");
	printf("\n11.....Floor");
	printf("\n12.....Ceil");
	printf("\n13.....Sqrt");
	printf("\n14.....Pow");
	printf("\n15.....Sin");
	printf("\n16.....Cos");
	printf("\n17.....Prime check");
	printf("\n18.....Mean");
	printf("\n19.....Median");
	printf("\n20.....Mode");
	printf("\nEnter the choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :int a,b,c;
			printf("\nEnter the value of a and b:");
			scanf("%d%d",&a,&b);
			c=a+b;
			printf("Addition is : %d",c);
			break;
		case 2 :
			printf("\nEnter the value of a and b:");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf("Subtraction is : %d",c);
			break;
		case 3 :
			printf("\nEnter the value of a and b:");
			scanf("%d%d",&a,&b);
			c=a*b;
			printf("Multiplication is : %d",c);
			break;
		case 4 :
			printf("\nEnter the value of a and b:");
			scanf("%d%d",&a,&b);
			c=a/b;
			printf("Division is : %d",c);
			break;
		case 5 :printf("\nEnter the value:");
			scanf("%d",&a);
			b=a*a;
			printf("Root of value is :%d",b);
			break;
		case 6 :printf("\nEnter the value:");
			scanf("%d",&a);
			b=a*a*a;
			printf("Cube of value is :%d",b);
			break;
		case 7 :long int decimalnumber;
			printf("\nEnter the decimal value :");
			scanf("%d",&decimalnumber);
			printf("Hexadecimal is :%X",decimalnumber);
			break;
		case 8 :int d[20];
			int decimalno,i=0;
			printf("\nEnter the decimal value :");
			scanf("%d",&decimalno);
			while(decimalno>0)
			{
				d[i] = decimalno%2;
				i++;
				decimalno=decimalno/2;
			}
			for(int j=i-1;j>=0;j--)
			{
				printf("%d",d[j]);
			}
			break;
		case 9 :
			printf("\nEnter the decimal value :");
			scanf("%d",&decimalnumber);
			printf("Octal is :%o",decimalnumber);
			break;
		case 10:int num,result;
			printf("\nEnter a value :");
			scanf("%d",&num);
			result=abs(num);
			printf("\nAbsolute value of %d = %d",num,result);
			break;
		case 11:double m,res;
			printf("\nEnter a value :");
			scanf("%lf",&m);
			res=floor(m);
			printf("\nAbsolute value of %.2lf = %.2lf",m,res);
			break;
		case 12:
			printf("\nEnter a value :");
			scanf("%lf",&m);
			res=ceil(m);
			printf("\nAbsolute value of %.2lf = %.2lf",m,res);
			break;
		case 13:
			printf("\nEnter a value :");
			scanf("%lf",&m);
			res=sqrt(m);
			printf("\nsqrt value of %.2lf = %.2lf",m,res);
			break;
		case 14:double v1,v2;
			printf("\nEnter a value :");
			scanf("%lf%lf",&v1,&v2);
			res=pow(v1,v2);
			printf("\n%.2lf raised to  %.2lf = %.2lf",v1,v2,res);
			break;
		case 15:double x =M_PI/6;
			printf("\nEnter a value :");
			scanf("%lf",&x);
			res=sin(x);
			printf("\nThe sin(%lf) = %.2lf",x,res);
			break;

		case 16:double s=1.0471;
			printf("\nEnter a value :");
			scanf("%lf",&s);
			res=cos(s);
			printf("\nThe cos(%4lf) = %.2lf",s,res);
			break;
		case 17:
			int n,flag=0;
			printf("\nEnter a positive integer: ");
			scanf("%d",&n);
			for(i=2;i<=n/2;++i)
			{
				if(n%i==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				printf("\n%d is a prime number",n);
			}
			else
			{
				printf("\n%d is not a prime number",n);
			}
			break;
		case 18:printf("\n ---Mean --");
			//mean
		case 19:printf("\n ---median---");

			//median
		case 20:printf("\n---mode");
			// mode



	}//enf of switch
getch();
}