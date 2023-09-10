#include<iostream>
using namespace std;
class Add{
	private:
		int a;
	public:
		void get()
		{
			cout<<"Enter value of a : "<<endl;
			cin>>a;
		}
		void calc(Add m[])
		{
			int x=m[0].a+m[1].a+m[2].a;
			cout<<"The sum is : "<<x;
		}
};
int main()
{
	Add q[3];
	q[0].get();
	q[1].get();
	q[2].get();	
	q[0].calc(q);
	return 0;
}
