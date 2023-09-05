#include<iostream>
using namespace std;

class test
{
	private:
		static int p, t, r;
		
	public:
		
		static void getdata()
		{
			cout << "Enter the value of p and t: ";
			cin >> p >> t;
		}
		void calculatedata()
		{
			int si;
			si = (p * t * r) / 100;
			cout << "The SI is " << si << endl;
		}
};

int test::p = 0; 
int test::t = 0;
int test::r = 8;

int main()
{
	test t1,t2,t3;
	t1.getdata();
	t1.calculatedata();
	t2.getdata();
	t2.calculatedata();
	t3.getdata();
	t3.calculatedata();
	return 0;
}

