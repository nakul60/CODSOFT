#include<iostream>
using namespace std;
class cal{
	float num1;
	float num2;
	float result;
	public:
	cal()
	{
		num1 = 0;
		num2 = 0;
		result = 0;
	}
	void get_info()
	{
		cout<<"Enter First Number: ";
		cin>>num1;
		cout<<endl;
		cout<<"Enter Second Number: ";
		cin>>num2;
		cout<<endl;
	}
	void display()
	{
		cout<<result;
	}
	void add()
	{
		result = num1 + num2;
	}
	void sub()
	{
		result = num1 - num2;
	}
	void mul()
	{
		result = num1 * num2;
	}
	void div()
	{
		result = num1 / num2;
		if(num2 == 0)
		cout<<"\nZero Division Error!"<<endl;
	}
};
int main()
{
	cal c;
	cout<<"\t\t\tWelcome to Simple Calculator!\n\n";
	cout<<"Press 1 for Addition (+)\n";
	cout<<"Press 2 for Subtraction (-)\n";
	cout<<"Press 3 for Multiplication (*)\n";
	cout<<"Press 4 for Division (/)\n";
	int ch,n;
	do{
		cout<<"Enter your choice: ";
		cin>>ch;
		cout<<endl;
		switch(ch)
		{
			case 1:
					c.get_info();
					c.add();
					cout<<"Addition is: ";
					c.display();
					cout<<endl;
					break;
					
			case 2:
					c.get_info();
					c.sub();
					cout<<"Subtraction is: ";
					c.display();
					cout<<endl;
					break;
					
			case 3:
					c.get_info();
					c.mul();
					cout<<"Product is: ";
					c.display();
					cout<<endl;
					break;
					
			case 4:
					c.get_info();
					c.div();
					cout<<"Division is: ";
					c.display();
					cout<<endl;
					break;
				
			default: 
					cout<<"Please enter a Valid choice!"<<endl;
	}
					
			cout<<"\nPress 1 to continue or 0 to stop: ";
			cin>>n;
			cout<<endl;
	}while(n);
	
	return 0;
}         
