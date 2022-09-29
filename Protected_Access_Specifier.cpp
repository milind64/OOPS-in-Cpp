#include <iostream>
using namespace std;

class Teacher
{
    protected:
    int marks;

};
class Student : public Teacher
{
    public:
        int partialMarks;
        void setMarks(int s)
        {
            marks = s;
        }
        int getMarks()
        {
            return marks;
        }

};

int main()
{
    Student obj;
    
    obj.setMarks(99);
    obj.partialMarks = 1;
    cout<<obj.getMarks() + obj.partialMarks<<endl;
    return 0;
}