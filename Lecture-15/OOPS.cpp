#include<iostream>
using namespace std;

//---------------BLUE PRINT --------------------
class car
{
	int seats;
public:
	char *name;
	int model;
	int price;
	static int count;
	const int tyres;

	car():tyres(4),name(NULL)
	{
		cout<<"I AM IN DEFAULT CONSTRUCTOR"<<endl;
		// name=NULL;
		count++;
	}

	car(char *ch,int m,int p,int s):tyres(4),model(m),price(p)
	{
		cout<<"Iam in 4 parameter CONSTRUCTOR"<<endl;
		name=new char[strlen(ch)+1];
		strcpy(name,ch);
		// model=m;
		// price=p;
		seats=s;
		count++;
	}

	car(char *ch,int m,int p):tyres(4)
	{
		cout<<"In 3 parameter CONSTRUCTOR"<<endl;
		name=new char[strlen(ch)+1];
		strcpy(name,ch);
		model=m;
		price=p;
		seats=4;
		count++;

	}

	car(car &x):tyres(4)
	{	// 1. car c(d)
		// 2. car c = d;
		cout<<"INSIDE COPY CONSTRUCTOR"<<endl;
		name=new char[strlen(x.name)+1];
		strcpy(name,x.name);
		model=x.model;
		price=x.price;
		seats=x.seats;
		count++;
	}

	void print()const
	{
		cout<<"name is "<<name<<endl;
		cout<<"model is "<<model<<endl;
		cout<<"seats are "<<seats<<endl;
		cout<<"price is "<<price<<endl;
	}

	void setValues(char *ch,int m,int p,int s)
	{
		if(name!=NULL)
		{
			delete []name;
			name=NULL;
		}
		name=new char[strlen(ch)+1];
		strcpy(name,ch);
		model=m;
		price=p;
		seats=s;
	}

	void setSeats(int s)
	{
		if(s>0)
		{
			seats=s;	
		}
		seats=4;	
	}

	int getSeats() const
	{
		return seats;
	}

	void setName(char *ch)
	{
		if(name!=NULL)
		{
			delete []name;
			name=NULL;
		}
		name=new char[strlen(ch)+1];
		strcpy(name,ch);
	}


	void operator=(car x)
	{
		if(name!=NULL)
		{
			delete []name;
			name=NULL;
		}
		name=new char[strlen(x.name)+1];
		strcpy(name,x.name);
		model=x.model;
		price=x.price;
		seats=x.seats;
	}

	void operator+=(car x)
	{
 
		char *oldname=name;
		int l1=strlen(name);
		int l2=strlen(x.name);
		name=new char[l1+l2+1];
		strcpy(name,oldname);
		strcat(name,x.name);
		delete []oldname;

		model+=x.model;
		price+=x.price;
		seats+=x.seats;
	}

	~car(){
		cout<<"Deleting Car "<<name<<endl;
		count--;
	}
};

int car::count = 0; // Assign values to static variables in this way


int main()
{
	car A,B;
	A.model=10;
	A.price=1000;
	// A.seats=4;
	A.setSeats(-1);
	A.setName("Audi");
	// strcpy(A.name,"Audi");

	B.setValues("BMW",12,950,4);

	car C("honda",13,1001,4);

	car D("maruti",14,100);

//----COPY CONSTRUCTORS
	car E(D);
	car F=E;


//--COPY ASSIGNMENT 
	car G;
	G=A;

	// F.name[0]='G';

	A+=B;

	// cout<<"name is "<<A.name<<endl;
	// cout<<"model is "<<A.model<<endl;
	// cout<<"seats are "<<A.seats<<endl;
	// cout<<"price is "<<A.price<<endl;
	cout<<"seats are "<<A.getSeats()<<endl;
	A.print();
	cout<<endl;
	B.print();
	cout<<endl;
	C.print();
	cout<<endl;
	D.print();
	cout<<endl;
	E.print();
	cout<<endl;
	F.print();
	cout<<endl;
	G.print();
	cout<<endl;

	cout<<car::count<<endl;
	return 0;
}










