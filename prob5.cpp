#include <iostream>
using namespace std;

class Base{
    public:
        int p1,p2;
};
class Child: public Base{
    public:
        int p3,p4;
};
int main(){
    Child obj;
    obj.p1 = 10;
    obj.p2 = -11;
    obj.p3 = -15;
    obj.p4 = 20;
    int num;
    cout<<"Enter your Choice : "<<endl;
    cin>>num;
    if (num%2==0)
    {
        //task
        if (obj.p3<0)
        obj.p3*=-1;
        if (obj.p4<0)
        obj.p3*=-1;
        cout<<"New Ans: "<<obj.p3<<" "<<obj.p4;
    }
    else
    {
        //task
        if (obj.p1>0)
        obj.p1*=-1;
        if (obj.p2>0)
        obj.p2*=-1;
        cout<<"New Ans: "<<obj.p1<<" "<<obj.p2;
    }
return 0;
}
