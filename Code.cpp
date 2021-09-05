#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void print()
{
	int c1,c2,c3,c4;                                                       
	char m[100];
	clrscr();
	cout<<"Welcome please select what you want\n1.Now showing\n2.Coming soon\t:";
	cin>>c1;
	clrscr();
	if(c1==1)
	{
		cout<<"1.JOKER\n2.CARS 2\n3.BIGIL\n4.KAITHI\n";
		l1:cin>>c2;
		if(!(c2>=1)&&(c2<=4))
		{
			cout<<"Enter the appropriate option!\n";
			goto l1;
		}
		else
		if(c2==1)
		{
			strcpy(m,"MOVIE 1");
		}
		else if(c2==2)
		{
		       strcpy(m,"MOVIE 2");
		}
		else if(c2==3)
		{
		       strcpy(m,"MOVIE 3");
		}
		else if(c2==4)
		{
		       strcpy(m,"MOVIE 4");
		}

	}
	else if(c2==2)
	{
		cout<<"1.ENPT(2040)\n2.ADITHYA VARMA\n";
		l2:cin>>c3;
		if(!(c3>=1)&&(c3<=4))
		{
			cout<<"Enter the appropriate option!\n";
			goto l2;
		}
			else
		if(c2==1)
		{
		       strcpy(m,"MOVIE 5");
		}

		else if(c2==2)
		{
			strcpy(m,"MOVIE 6");
		}
	} 										// Multiple languages can be added using more else if statements
	clrscr();
	cout<<"Choose the show time which you want\n1.07:30\n2.11:30\n3.15:30\n4.18:30\n5.22:15\n";
	l3:cin>>c4;
	if(!((c4>=1)&&(c4<=5)))
	{
			cout<<"Enter the appropriate option!\n";
			goto l3;
	}
}
void calc()
{
	int c5,n,cost=0;
	char op;
	clrscr();
	cout<<"1.Premium \tRs:220\n2.Ordinary \tRs:200\n";
	l4:cin>>c5;
	if(!((c5>=1)&&(c5<=2)))
	{
		cout<<"Enter the appropriate option!\n";
		goto l4;
	}
	clrscr();
	cout<<"Enter the number of persons";
	cin>>n;
	if(c5==1)
	{
		cost=220*n;
	}
	if(c5==2)
	{
		cost=200*n;
	}
	clrscr();
	cout<<"the cost of the booking is Rs:"<<cost<<"\nclick 'y' to continue 'n' to cancel\n";
	cin>>op;
	if(op=='n')
	{
		exit(0);
	}
}
void main()
{
	print();
	calc();
	getch();
}
