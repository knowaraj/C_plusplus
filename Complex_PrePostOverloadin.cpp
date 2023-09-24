#include<iostream>
using namespace std;
class Complex{
	private:
		int a;
		int b;
	public:
		void get()
		{
			cout<<"Enter a and b: ";
			cin>>a>>b;
			
		}
		void display()
		{
			cout<<"z="<<a<<"+i"<<b<<endl;
		}
		void operator ++(int)
		{
			a=a+5;
			b=b+5;
		}
		void operator ++()
		{
			a=a+5;
			b=b+5;
		}	
};
int main()
{
	Complex u;
	u.get();
	u.display();
	cout<<"After postfix : "<<endl;
	u++;
	u.display();
	cout<<"After prefix : "<<endl;
	++u;
	u.display();

	return 0;
	
	
}
