#include<iostream>
using namespace std;
class ovrld{
	private:
		int a;
	public:
		void get()
		{
			cout<<"Enter a : "<<endl;
			cin>>a;
			
		}
		void display()
		{
			cout<<"The value is : "<<a<<endl;
		}
		ovrld operator +(ovrld obj2)
		{
			ovrld obj1;
			obj1.a=a+obj2.a;
			return obj1;
		}
};
int main()
{
	ovrld x,y,z;
	y.get();
	z.get();
	x=y+z;
	y.display();
	z.display();
	x.display();
	return 0;
}
