#include<iostream>
using namespace std;
class Operator{
	private:
		int a;
		int b;
	public:
		void get()
		{
			cout<<"Enter a and b: ";
			cin>>a>>b;
			
		}
		int operator ++(int)
		{
			return a-b;
		}
};
int main()
{
	Operator u;
	u.get();
	int m= u++;
	cout<<m;
}
