#include<iostream>
using namespace std;
class second;
class first{
	private:
		int num1;
		friend class second;
	public:
		void get(){
			cout<<"Enter value for num 1"<<endl;
			cin>>num1;
		}
		
}obj1;
class second{
	private:
		int num2;
	public:
		void get(){
			cout<<"Enter value for num 1"<<endl;
			cin>>num2;
		}
		int add(first m,second n) 
		{
       		return m.num1 + n.num2;
    	}
}obj2;
int main()
{
	obj1.get();
	obj2.get();
	int x=obj2.add(obj1,obj2);
	cout<<x;
	return 0;
}
