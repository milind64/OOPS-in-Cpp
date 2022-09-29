#include<iostream>
using namespace std;

class Time{
    public:
    int hrs, mins, sec;

    Time(){
        hrs = 0; mins = 0; sec=0;
    }
    void set_time(){
        cout<<"Enter hour: ";
        cin>>hrs;
        cout<<"Enter minute: ";
        cin>>mins;
        cout<<"Enter second: ";
        cin>>sec;
    }

    void print(){
        cout<<"Current Time is => "<<hrs<<":"<<mins<<":"<<sec<<endl;
    }
};

int main(){
    Time obj;
    obj.set_time();
    obj.print();
    return 0;
}