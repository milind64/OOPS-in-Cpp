#include <iostream>
using namespace std;


class student 
{
    public:
    string name,department;
    int marks,comb_marks;
    student (string dept)
    {
        department = dept;
    }
    void print();
    void operator +(student a);
};

void student::operator +(student a)
{
    
}
void student:: print()
{
    cout<<
}

int main ()
{   
    student s("IT") , p("CS");
    s.name = "Milind";
    p.name = "Murmu";
    s.marks = 88;
    p.marks = 98;
    s+p;
    return 0;
}