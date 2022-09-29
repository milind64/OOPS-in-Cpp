#include <iostream>
using namespace std;

class MyClass{     //* 1st Class
    public:
    void display1()
    {
        cout<<"One"<<endl;
    }
};
class OtherClass   //* 2nd Class 
{
    public:
        void display2()
        {
        cout<<"Two"<<endl;
        }
};
class DClass : public MyClass , public OtherClass  //* Derived by 1st and 2nd Class 
{   
    public:

};


int main ()                     //* Calling the Multilevel Inheritance
{
    DClass obj;
    obj.display1();
    obj.display2();
    return 0;
}