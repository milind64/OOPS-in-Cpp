#include<iostream>
using namespace std;

class Student{
    public:
    int x1,y1,x2,y2;
    Student(int a, int b)    
    {
        x1 = a;
        y1 = b;
    }
    Student(Student &ruthvik)
    {   
        x2 = ruthvik.x1;y2 = ruthvik.y1;
        cout<<"copied\n"<<x2<<y2<<endl;
    }

};

int main(){
    
    Student ruthvik(7,0);
    Student milind(ruthvik);
    return 0;

}