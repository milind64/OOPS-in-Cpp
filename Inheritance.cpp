// #include <iostream>
// using namespace std;

// class MyClass{
//    public:
//     string name;
//     int roll;
//     int marks;
// };

// int main()
// {
//         MyClass obj;
//         MyClass obj1;
//         MyClass obj2;
//         MyClass obj3;

//         cout<<"Enter Name of first Student ?"<<endl;
//         cin>>obj.name;
//         cout<<"Enter marks of the first Student ? "<<endl;
//         cin>>obj.roll;
//         cout<<"Enter the Class of the first student ? "<<endl;
//         cin>>obj.marks;

//         cout<<"Enter Name of second Student ?"<<endl;
//         cin>>obj1.name;
//         cout<<"Enter marks of the first Student ? "<<endl;
//         cout<<"Enter the Class of the first student ? "<<endl;
//         cout<<"Enter Name of third Student ?"<<endl;
//         cin>>obj2.name;
//         cout<<"Enter marks of the first Student ? "<<endl;
//         cout<<"Enter the Class of the first student ? "<<endl;

        

//     return 0;
// }

#include <iostream>
using namespace std;

class SeniorClass {
    public:
        string n = "Yes / No";
        void print()
        {
            cout<<"Parent Class"<<endl;
        }
};

class JuniorClass : public SeniorClass
{
    public :
        int j = 5;
        string name = "Milind";
};

int main()
{
    JuniorClass obj;
    obj.print();
    return 0;
}