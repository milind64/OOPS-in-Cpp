#include <iostream>
using namespace std;

class student 
{
    public :                                          //* Default Constructor Parameterised Constructor
    string name;                                      //* Copy Constructor Parameterised Constructor
    int roll_no;                                      //* Parameterised Constructor Parameterised Constructor
    double marks;                                     
    string department;                        
    void print();
    student(string dept);
    student (student &p);
    ~student();                                       //* Destructor ~ member func that del memory, we can have only one distructor 
};

student :: student(string dept)
{
    department = dept;
}
student::student(student &p)
{
    department = p.department;
}
student::~student()
{
    cout<<"Destructed"<<endl;
}

void student :: print(){    
    cout<<"The Student Name is :"<<name<<endl;
    cout<<"The Marks is :"<<marks<<endl;
    cout<<"The Department is :"<<department<<endl;

}

int main () 
{   
    student s("DSAI");
    student r(s);


    return 0;
}