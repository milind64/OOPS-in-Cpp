#include <iostream>
using namespace std;

class student
{
    public:
    void print()
    {
        cout<<"hello world"<<endl;
    }
};
class semester1: public student
{
    public:
    int marks = 50;

};
int main ()
{
    semester1 s;
    s.print();
    cout<<s.marks<<endl;
    return 0;
}