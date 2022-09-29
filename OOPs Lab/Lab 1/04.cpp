#include<iostream>
using namespace std;

class Student{
    string name;
    string reg_no;
    string branch;
    int sem;

    public: 
    void enteringdetails(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Reg. no.: ";
        cin>>reg_no;
        cout<<"Enter Branch: ";
        cin>>branch;
        cout<<"Enter sem: ";
        cin>>sem;
    }

    void print(){
        cout<<endl<<"Name = "<<name<<endl;
        cout<<"Reg.no. = "<<reg_no<<endl;
        cout<<"Branch = "<<branch<<endl;
        cout<<"Semester = "<<sem<<endl;
    }
};

int main(){
    Student st;
    st.enteringdetails();
    st.print();
    return 0;
}