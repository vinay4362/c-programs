/*	Author : Sharma Vinay
	Email  : vinaysharma4362@gmail.com
	Date of creation :13 july 2016
	Objective : Learn Menu driven
*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>

#define RN 50
#define MN 70
#define NU 60

#define DS 70
#define MV 40
#define ID 40

#define SK 45
#define DL 60
#define RT 10
#define KD 30
#define RC 50
#define DK 40


struct bill
{
	int quantity,price;
	char name[20];
}item[30];


void main()
{
	int j=0,i=0,qt,total=0,choice;
	char c;

	menu:
	if(i!=0)
	clrscr();
	printf("                Welcome to D'Hotel.          \n ");
	printf("             +============================+          \n\n");
	printf("&& Please select the meal that you would like to purchase. && \n\n");
	printf("\t\t      [1] Chinese Food\n");
	printf("\t\t      [2] South indian Food\n");
	printf("\t\t      [3] Gujarati Food\n");
	printf("\nEnter your choice here : ");
	scanf("%d",&choice);
	printf("-------------------------")	;

	switch(choice)
	{
		case 1: //Chinese food
			printf("\n\t\t      [1] Rice manchurian noodles = 50 Rs.\n");
			printf("\t\t      [2] Manchurian =70 Rs.\n");
			printf("\t\t      [3] Hakka Noodles = 60 Rs.\n");
			printf("\nEnter your choice here : ");
			scanf("%d", &choice);
			printf("\nEnter Quantity :\n");
			scanf("%d",&qt);
			switch(choice)
			{
				case 1:
					item[i].quantity=qt;
					item[i].price=RN;
					strcpy(item[i].name,"Rice Noodle");
					i++;
					break;
				case 2:
					item[i].quantity=qt;
					item[i].price=MN;
					strcpy(item[i].name,"Manchurian Noodle");
					i++;
					break;
				case 3:
					item[i].quantity=qt;
					item[i].price=NU;
					strcpy(item[i].name,"Hakka Noodles");
					i++;
					break;

			};
			break;

		case 2: //South Indian Food
			printf("\n\t\t      [1] Dhosa = 70 Rs.\n");
			printf("\t\t      [2] Mendu vada = 40 Rs.\n");
			printf("\t\t      [3] Idli = 40 Rs.\n");
			printf("Enter your choice here : ");
			scanf("%d", &choice);
			printf("\nEnter Quantity : \n");
			scanf("%d",&qt);
			switch(choice)
			{
				case 1:
					item[i].quantity=qt;
					item[i].price=DS;
					strcpy(item[i].name,"Dhosa");
					i++;
					break;
				case 2:
					item[i].quantity=qt;
					item[i].price=MV;
					strcpy(item[i].name,"Mendu vada");
					i++;
					break;
				case 3:
					item[i].quantity=qt;
					item[i].price=ID;
					strcpy(item[i].name,"Idli");
					i++;
					break;

			};
			break;

		case 3: //Gujarati
			printf("\n\t\t      [1] Sak = 45 Rs.\n");
			printf("\t\t      [2] Dal = 60 Rs.\n");
			printf("\t\t      [3] Rotli = 10 Rs.\n");
			printf("\t\t      [4] Kadi = 30 Rs.\n");
			printf("\t\t      [5] Rice = 50 Rs.\n");
			printf("\t\t      [6] Dhokla = 40 Rs.\n");
			printf("\nEnter your choice here : ");
			scanf("%d",&choice);
			printf("\nQnter Quantity :\n");
			scanf("%d",&qt);
			switch(choice)
			{
				case 1:
					item[i].quantity=qt;
					item[i].price=SK;
					strcpy(item[i].name,"SAK");
					i++;
					break;
				case 2:
					item[i].quantity=qt;
					item[i].price=DL;
					strcpy(item[i].name,"DAL");
					i++;
					break;
				case 3:
					item[i].quantity=qt;
					item[i].price=RT;
					strcpy(item[i].name,"ROTLI");
					i++;
					break;
				case 4:
					item[i].quantity=qt;
					item[i].price=KD;
					strcpy(item[i].name,"KADI");
					i++;
					break;
				case 5:
					item[i].quantity=qt;
					item[i].price=RC;
					strcpy(item[i].name,"RICE");
					i++;
					break;
				case 6:
					item[i].quantity=qt;
					item[i].price=DK;
					strcpy(item[i].name,"DHOKLA");
					i++;
					break;


			};
			break;
	}


	printf("\nWant to add more dish? (y/n) \n>");
	c=getche();
	if(c=='y')
	{
		goto menu;
	}else
	{
		clrscr();
		printf("\nNo.\tItem name\tPrice\tQuantity\tPrice\n");
		printf("-----------------------------------------------------------------\n");
		for(j=0;j<i;j++)
		{
			printf("%d\t%10s\t%d\t%d\t",j+1,item[j].name,item[j].price,item[j].quantity);
			printf("\t%d\n",item[j].price*item[j].quantity);
			total=total+item[j].price*item[j].quantity;

		}
		printf("\nTotal:%d",total);
	       //	exit(0);
	}
	getch();
}
