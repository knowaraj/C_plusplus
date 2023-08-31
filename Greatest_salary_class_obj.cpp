#include<iostream>
using namespace std;

class employee
{
	private:
		
    	int salary;
    	int allowance;
    	int bonus;
    	int total;
    	
    public:
    	
    	void getdata()
    	{
    		cout<<"Enter the salary,allowance and bonus of the employee: ";
    		cin>>salary>>allowance>>bonus;
    		total=salary+allowance+bonus;
    	
		}
		
		int gettotal()
		{
			
			return total;
		
		}
		
		void displaydata()
		{
			cout<<"The employee with highest total is "<<total<<endl;
		}
};

int main()
{
	employee e[3];
	int i=0,highestsalary=1;
	for(i=0;i<=2;i++)
	{
		cout<<"Enter the detail of the employee "<<i+1<<endl;
		e[i].getdata();
	}
	
	for (i=0;i<=2;i++)
	{
	  if(e[i].gettotal() > e[highestsalary].gettotal() )
	  {
	  	highestsalary++;;
	  }
	}
	
	cout<<"The employee with the highest earning is employee "<<highestsalary+1<<endl;
	e[highestsalary].displaydata();
	
	return 0;
}
