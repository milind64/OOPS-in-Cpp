#include <iostream>
using namespace std;

class MyClass{
    public:     //*Access specifier
     MyClass()  //*Constructor
     {
        cout<<"Hi I'm Milind !"<<endl;
     }
     int func(int n);
};

int MyClass::func(int n)   //*Method outside the Class 
{
    return n;
}

int main(){

    MyClass obj; //*Creating an object will automatically call the Constructor

    int a = obj.func(5);
    cout<<a;
    
    return 0;
}