#include<iostream>
using namespace std;
class S
{
	private:
		static float r;
		float p,t;
	public:
		void get()
		{
			cout << "Enter Principal and Time: ";
			cin >>p>>t;
		}
		void si()
		{
			float x;
			x = (p*t*r)/100;
			cout << "The SI is : " <<x<<endl;
		}
};
float S::r = 8;

int main()
{
	S a,b,c;
	a.get();
	a.si();
	b.get();
	b.si();
	c.get();
	c.si();
	return 0;
}

