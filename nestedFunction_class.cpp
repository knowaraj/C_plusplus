#include<iostream>
using namespace std;
class si{
	private:
		int p,t,r;
	
	public:
		void get()
		{
			cout<<"Enter p,t,r : ";
			cin>>p>>t>>r;
		}
		float calculate()
		{
			return (p*t*r)/100; 
		}
		void display()
		{
			cout<<"The SI is : "<<calculate();
		}
};
int main()
{
	si e;
	e.get();
	e.display();
	return 0;
}

