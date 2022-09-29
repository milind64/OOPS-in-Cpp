#include <iostream>
using namespace std;

class MyClass{
    public:
        string agent;
        string ultimate;
        int power;
        MyClass(string x,string y,int z)  //*Constructor and Class Name should always be the same 
        {
            agent = x;
            ultimate = y;
            power = z;
        }

};

int main()
{
    MyClass obj1("Chamber","Tour De Force",200);
    
    return 0;
}