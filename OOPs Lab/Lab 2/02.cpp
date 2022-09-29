#include<iostream>
using namespace std;

class Complex{
    public:
    int real; 
    int imaginary;
    Complex(){
        real = 0; imaginary = 0;
    }
    void input(){
        cout<<"Enter real value: ";
        cin>>real;
        cout<<"Enter imaginary value: ";
        cin>>imaginary;
    }

    void print(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }

    Complex operator +(Complex c){
        Complex res;
        res.real = real + c.real;
        res.imaginary = imaginary + c.imaginary;
        return res;
    }
};

int main(){
    Complex c1, c2;
    c1.input();
    c2.input();
    c1.print();
    c2.print();

    c2 = c2 + c1;
    c2.print();
    
    return 0;
}