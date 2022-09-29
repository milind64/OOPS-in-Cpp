#include <iostream>
using namespace std;

class student                                                     //* Function Overloading
{                                                                 //* Same return type / different no. of parameters or different no. of 
    public:
    // void class_marks(int one,int two,int three,int four);
    // void class_marks(int one, int two,int three);
    void class_name(string name);
    void class_name(double marks);
};

// void student::class_marks(int one,int two,int three,int four)
// {
//     cout<<"Ban gya"<<endl;
// }
// void student::class_marks(int five,int six,int seven)
// {
//     cout<<"Ban gya"<<endl;
// }

void student::class_name(string name)
{
    cout<<name<<endl;
}
void student::class_name(double marks)
{
    cout<<marks<<endl;
}

int main()
{
    student s;
    // s.class_marks(1,2,3,4);
    // s.class_marks(5,6,7);
    
    s.class_name("Milind Murmu");
    s.class_name(100.00000);
    
    return 0;
}