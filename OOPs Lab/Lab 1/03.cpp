#include<iostream>
using namespace std;

class Area{
    public:

    float choice(int ch){
        switch(ch){
        case 1:
            return circle();
            break;
        case 2:
            return rectangle();
            break;
        case 3:
            return triangle();
            break;
        default:
        cout<<"Invalid Input !";
        }
        return 0;
    }

    float circle(){
        int r;
        cout<<"Enter radius: ";
        cin>>r;
        return (3.14)*r*r;
    }

    float rectangle(){
        int l, b;
        cout<<"Enter Length: ";
        cin>>l;
        cout<<"Enter Breadth: ";
        cin>>b;
        return l*b;
    }

    float triangle(){
        int h, b;
        cout<<"Enter Height: ";
        cin>>h;
        cout<<"Enter Base: ";
        cin>>b;
        return (h*b)/2;
    }

};

int main(){
    int c;
    cout<<"Enter Choice :"<<endl;
    cout<<"1 - Area of Circle"<<endl;
    cout<<"2 - Area of Rectangle"<<endl;
    cout<<"3 - Area of Triangle"<<endl<<endl;
    cin>>c;
    Area a;
    cout<<"\nArea = "<<a.choice(c)<<endl;

    return 0;
}