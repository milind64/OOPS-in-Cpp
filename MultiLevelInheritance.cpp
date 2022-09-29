//*Hierarchical Inheritance

#include <iostream>
using namespace std;

class Father {
    public:
    void display1(){
    cout<<"I'm Father"<<endl;
    }
};
class Child : public Father 
{
    public:
    void display2(){
    cout<<"I'm Child"<<endl;
    }
};
class GrandChild : public Child 
{
    public:
    void display3(){
    cout<<"I'm GrandChild"<<endl;
    }
};

int main()
{
    GrandChild obj;
    obj.display1();
    obj.display2();
    obj.display3();
    
    return 0;
}