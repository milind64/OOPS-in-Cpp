#include<iostream>
using namespace std;

class ComplexNumber{
    int real; 
    int imaginary;

    public:
    void input(){
        cout<<"Enter real part of the number : ";
        cin>>real;
        cout<<"Enter imaginary part of the number : ";
        cin>>imaginary;
    }

    void print(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }

    void operator ++(){
        real = real+1;
    }
    void operator --(){
        real = real-1;
    }

};

int main(){
    ComplexNumber obj;
    obj.input();
    cout<<"Complex Numbers : "<<endl;
    obj.print();
    ++obj;
    obj.print();
    --obj;
    obj.print();

    return 0;
}