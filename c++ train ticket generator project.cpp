#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
class x
{
	
		public:
			int m,d,y,k,p,b,l,r,c,cv1,cv2;
			long int no,no1;
	char g1,g2,g3 ,b1,b2,b3;
		char name[20],name1[20],name2[20],email[50];
		
	char des[20];
	char source[20];
	char train[20];
	void get();

};
class y:public x
{
	public:
			
	void get1();
};
class z:public y
{
	public:
	void get2();
	void dis3();
};
	void x::get()
{
	
	cout<<setw(58)<<"enter source  :";
	cin>>source;
	cout<<endl;
	cout<<setw(58)<<"enter destination  :";
	cin>>des;
	cout<<endl;
	cout<<setw(58)<<"enter date of journey (dd)  : ";
	cin>>d;
	cout<<endl;
	cout<<setw(58)<<"enter month of journey (mm)  :  ";
	cin>>m;
	cout<<endl;
	cout<<setw(58)<<"enter year of journey (yyyy)  :  ";
	cin>>y;
	cout<<endl<<endl<<endl;
	cout<<setw(58)<<"the date you have chosen is :  "<<d<<"/"<<m<<"/"<<y;
	cout<<endl<<endl<<endl<<endl;
	cout<<setw(78)<<" <<<<<<<<<<<<<<<  select your train >>>>>>>>>>>>>>>"<<endl<<endl;
	cout<<setw(78)<<"[1]  ->  visakha express (10.00 AM)"<<endl;
	cout<<setw(78)<<"[2]  ->  shatabdi express (12.00 PM)"<<endl;
	cout<<setw(78)<<"[3]  ->  hirakud express (6.00 PM)"<<endl;
	cout<<setw(78)<<"[4]  ->  rajdhani epxress (9.45 PM)"<<endl<<endl;
	cin>>k;
	cout<<setw(78)<<" <<<<<<<<<<<<<<< select coach >>>>>>>>>>>>>>>>>"<<endl<<endl;
	cout<<setw(70)<<"[1]  1 tier AC "<<endl;
	cout<<setw(70)<<"[2]  2 tier AC "<<endl;
	cout<<setw(70)<<"[3]  3 tier AC "<<endl;
	cin>>c;
	cout<<endl;
}
void y::get1()
{
	get();
	cout<<setw(58)<<"enter no of passengers : ";
	cin>>p;
	cout<<endl;
	if(p==1)
	{
	cout<<setw(58)<<"enter the name of the person  :";
	cin>>name;
	cout<<endl;
	cout<<setw(58)<<"gender {press m for male ; f for female} :";
	cin>>g1;
	cout<<endl;
	cout<<setw(58)<<"choose your berth"<<endl<<endl;
	cout<<setw(58)<< " 1 . lower \t\t 2. upper"<<endl;
	cin>>b1;
	}
	else if(p==2)
	{
		cout<<setw(58)<<"enter the name of the 1st person  :";
		cin>>name;
		cout<<endl;
		cout<<setw(58)<<"gender {press m for male ; f for female} :";
		cin>>g1;
		cout<<endl;
			cout<<setw(58)<<"choose your berth"<<endl<<endl;
	cout<<setw(58)<< " 1 . lower \t\t 2. upper"<<endl;
	cin>>b2;

		cout<<setw(58)<<"enter the name of the 2nd person  :";
		cin>>name1;
		cout<<endl;
		cout<<setw(58)<<"gender {press m for male ; f for female} :";
		cin>>g2;
		cout<<endl;
			cout<<setw(58)<<"choose your berth"<<endl<<endl;
	cout<<setw(58)<< " 1 . lower \t\t 2. upper"<<endl;
	cin>>b3;
			
	}
	else
	{
		cout<<setw(58)<<"enter the name of the 1st person  :";
		cin>>name;
		cout<<setw(58)<<"gender {press m for male ; f for female}";
		cin>>g1;
		cout<<setw(58)<<"enter the name of the 2nd person  :";
		cin>>name1;
		cout<<setw(58)<<"gender {press m for male ; f for female}";
		cin>>g2;
			cout<<setw(58)<<"enter the name of the 3rd person  :";
		cin>>name2;
		cout<<setw(58)<<"gender {press m for male ; f for female}";
		cin>>g3;
	}
}
void z::get2()
{
	get1();
	cout<<setw(75)<<" [1] : to undergo a beneficiary"<<endl;
	cout<<setw(85)<<" [2] : to continue ticket booking without beneficiary"<<endl;
	cin>>b;
	if(b==1)
	{
		cout<<setw(58)<<" [1] <<  senior citizens"<<endl;
		cout<<setw(73)<<" [2] <<  central government officers"<<endl;
		cin>>l;
		cout<<setw(75)<<"choose payment option"<<endl;
		cout<<setw(75)<<" [1]  debit card"<<endl;
			cout<<setw(75)<<" [2]  credit card"<<endl;
		cin>>no;
		if(no==1)
		{
			cout<<setw(78)<<"enter debit card no: ";
			cin>>no;
			cout<<setw(78)<<"enter cvv : ";
			cin>>cv1;
		}
	else
		{
			cout<<setw(78)<<"enter credit card no :";
			cin>>no1;
			cout<<setw(78)<<"enter cvv :";
			cin>>cv2;
		}
		cout<<setw(58)<<"enter your email id for copy of ticket :";
cin>>email;
cout<<endl;

		int f;
		cout<<setw(58)<<"an email is sent to you"<<endl<<endl;
	cout<<setw(58)<<"press 1 to print your ticket"<<endl;
	cout<<setw(58)<<"press 2 to change the details"<<endl;
	cin>>f;
	if(f==1)
	{
	
		dis3();
	}
	else if(f==2)
	{

		get2();
	}
	else
	{
		cout<<"invalid input";
	}
	
		
	}
	else if(b==2)
	{
	
		cout<<endl;
		dis3();
	}
	else
	{
		cout<<setw(58)<<"invalid input";
	}

}
void z::dis3()
{
	cout<<endl<<endl<<endl;
	cout<<setw(78)<<"************************************************************"<<endl;
	cout<<setw(68)<<"YOU HAVE SUCESSFULLY BOOKED YOUR TICKET"<<endl<<endl;
	cout<<setw(78)<<"************************************************************"<<endl;
	cout<<setw(57)<<"YOUR SOURCE  :"<<source<<endl<<endl;
	cout<<setw(57)<<"TOUR DESTINATION  :"<<des<<endl<<endl;
	
	cout<<setw(57)<<"PASSENGERS :";
	if(p==1)
	{
		cout<<name<<  "    "<<g1 <<endl<<endl;
		if(b1==1)
	{
		cout<<setw(58)<<"BERTH : "<<"lower berth"<<endl<<endl;
	}
	else
	{
		cout<<setw(58)<<"BERTH : "<<"upper berth"<<endl<<endl;
	}
	}
	if(p==2)
	{
		cout<<"1. "<<name<< "    " <<g1<<endl<<endl;
		if(b2==1)
		{
		cout<<setw(62)<<"BERTH : lower berth"<<endl<<endl;
		}
		else
		{
			cout<<setw(62)<<"BERTH : upper berth"<<endl<<endl;
		}
			cout<<setw(58)<<"2."<<name1<<"   "<<g2<<endl<<endl;
		if(b3==1)
		{
		cout<<setw(68)<<"BERTH : lower berth"<<endl<<endl;
	}
	else
	{
			cout<<setw(62)<<"BERTH : upper berth"<<endl<<endl;
	}
}

	
	cout<<setw(57)<<"YOUR TRAIN  :";
switch(k)
{
	case 1:cout<<" visakha express (10.00 AM)"<<endl<<endl;
	break;
	case 2:cout<<"shatabdi express (12.00 PM)"<<endl<<endl;
	break;
	case 3:cout<<"hirakud express (6.00 PM)"<<endl<<endl;
	break;
	case 4:cout<<"rajdhani epxress (9.45 PM)"<<endl<<endl;
	break;
	default:cout<<"invalid input";
}
cout<<setw(57)<<"your coach:  ";
switch(c)
{
	case 1:cout<<" 1 tier AC"<<endl<<endl;
	break;
	case 2:cout<<" 2 tier AC"<<endl<<endl;
	break;
	case 3:cout<<" 3 tier AC"<<endl<<endl;
	break;
	default:cout<<"invalid input"<<endl<<endl;
}

cout<<setw(57)<<"PLATFORM NO: 3"<<endl<<endl;
if(l==1||l==2||l==3)
{
	cout<<setw(58)<<"YOUR TOTAL FARE(with discount)  :"<<((p*500)-200)<<endl<<endl<<endl;
}
else
{
	cout<<setw(58)<<"YOUR TOTAL FARE :"<<(p*500)<<endl<<endl<<endl;
}

cout<<setw(58)<<"IRCTC WISHES YOU A HAPPY AND SAFE JOURNEY"<<endl;
cout<<setw(58)<<"************************************************************************************************"<<endl;
}

main()
{

	int e,pnr;
	cout<<endl<<endl;
	cout<<setw(99)<<"************************************************************************"<<endl;
	cout<<setw(79)<<"WELCOME TO IRCTC TICKET BOOKING"<<endl<<endl;
	cout<<setw(99)<<"************************************************************************"<<endl<<endl<<endl;
	cout<<setw(47)<<" [1] : to book a ticket \t \t \t"<<" [2] : to cancel booking"<<endl;
	cout<<setw(44)<<" [3] : about IRCTC \t \t \t \t" <<" [4] : PNR status"<<endl<<endl<<endl;
	cin>>e;
	
	if(e==1)
	{
		ofstream obj1;
		obj1.open("naveen.txt");
	z obj;                
	obj.get2();
	obj1.write((char*)&obj,sizeof(obj));
	obj1.close();
	ifstream obj2;
	obj2.open("naveen.txt");
	obj2.read((char*)&obj,sizeof(obj));
	obj2.close();
    }
    else if(e==2)
    {
    	cout<<setw(72)<<"enter your pnr no: to cancel ticket : ";
    	cin>>pnr;
    	cout<<setw(72)<<"your ticket is succesfully cancelled";
	}
	else if (e==3)
	{
		cout<<setw(72)<<"irctc is an government official website for online train ticket reservation."<<endl;
	}
	else if(e==4)
	{
		cout<<setw(72)<<"enter 10 digit pnr no: "; 
		cin>>pnr;
		cout<<setw(78)<<"your ticket is confirmed"<<endl;  
	}
	else
	{
		cout<<setw(72)<<"invalid input";
	}
}
		

