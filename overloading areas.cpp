#include<iostream>
using namespace std;
void area(int x,int y)
{
	int z=x*y;
	cout<<"The area of Rectangle is : "<<z<<endl;
}
void area(int x,int y, int z)
{
	int a=0.5*x*y;
	cout<<"The area of triangle is : "<<a<<endl;
}
void area(int x)
{
	int a=6*(x*x);
	cout<<"The area of cube is : "<<a<<endl;
}

int main()
{
	cout<<"MENU:"<<endl;
	cout<<"1.Area of rectangle"<<endl;
	cout<<"2.Area of triangle"<<endl;
	cout<<"3.Area of cube"<<endl;
	cout<<"4.EXIT"<<endl<<endl;
	int choice;
	int a,b,c;
	cout<<"Enter your choice : "<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter the length and breedth of rectangle: "<<endl;
			cin>>a;
			cin>>b;
			area(a,b);
			break;
		case 2:
			cout<<"Enter the base and height of Triangle: "<<endl;
			cin>>a;
			cin>>b;
			area(a,b,4);
			break;
		case 3:
			cout<<"Enter length of Side of cube : "<<endl;
			cin>>a;
			area(a);
			break;
	    case 4:
	    	exit(0);
	    default:
	    	cout<<"You have entered Wrong Choice !!";
	}
	
	return 0;
}
