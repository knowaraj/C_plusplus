#include <iostream>
using namespace std;
class second;
class first {
        private:
       		int num1;
    		friend int add(first ,second );  

    public:
        first() : num1(10) {}
};

class second {
	
	private:
        int num2;    
        friend int add(first, second);
    public:
        
        second() : num2(10) {}
};
int add(first m, second n) {
    return (m.num1 + n.num2);
}

int main() {
    first obj1;
    second obj2;
    int y = add(obj1, obj2);
    cout<<"The sum is : "<<y;
    return 0;
}
