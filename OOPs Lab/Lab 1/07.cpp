#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    string reg;
    int age;
    string gender;
    string branch;
    int sem;

    void input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter reg: ";
        cin>>reg;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter gender: ";
        cin>>gender;
        cout<<"Enter branch: ";
        cin>>branch;
        cout<<"Enter sem: ";
        cin>>sem;
    }

    void print(){
        cout<<endl;
        cout<<"Your details are :- \n\n";
        cout<<"Name = "<<name<<endl;
        cout<<"Reg.no. = "<<reg<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
        cout<<"Branch = "<<branch<<endl;
        cout<<"Semester = "<<sem<<endl;
    }
};

class studentResultInfo: public Student{
    float marks;
    float percent;
    char grade;

    public:
    studentResultInfo(Student s){
        name = s.name;
        reg = s.reg;
        age = s.age;
        gender = s.gender;
        branch = s.branch;
        sem = s.sem;
    }

    void input(){
        cout<<"\nEnter marks out of 500: ";
        cin>>marks;
        percent = marks/5;
        if(percent > 90){
            grade = 'A';
        }
        else if(percent > 80){
            grade = 'B';
        }
        else if(percent > 70){
            grade = 'C';
        }
        else{grade = 'D';}
    }

    void print(){
        cout<<endl;
        cout<<"Your details with Grade :- \n\n";
        cout<<"Name = "<<name<<endl;
        cout<<"Reg.no. = "<<reg<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
        cout<<"Branch = "<<branch<<endl;
        cout<<"Semester = "<<sem<<endl;
        cout<<"Marks = "<<marks<<endl;
        cout<<"Percentage = "<<percent<<endl;
        cout<<"Grade = "<<grade<<endl;
    }
};

int main(){
    Student st;
    st.input();
    st.print();

    studentResultInfo str(st);
    str.input();
    str.print();
    return 0;
}