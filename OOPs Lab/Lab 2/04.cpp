#include<iostream>
using namespace std;

class shape{
    public:
    double a, b;

    void getData(int i);
};

void shape::getData(int i)
{
        if(i){
            cout<<"\nEnter the Height: ";
            cin>>a;
            cout<<"Enter the Base: ";
            cin>>b;
        }
        else{
            cout<<"\nEnter Length: ";
            cin>>a;
            cout<<"Enter Breadth: ";
            cin>>b;
        }
}

class triangle: public shape{
    double area;
    int type;

    public:
    triangle(){
        type = 1;
    }
    void input(){getData(type);}
    void display_area(){
        area = (a*b)/2;
        cout<<"\nArea of Triangle = "<<area<<endl;
    }
};

class rectangle: public shape{
    double area;
    int type;

    public:
    rectangle(){
        type = 0;
    }
    void input(){getData(type);}
    void display_area(){
        area = (a*b);
        cout<<"\nArea of Rectangle = "<<area<<endl;
    }
};

int main(){
    triangle t;
    rectangle r;

    t.input();
    t.display_area();

    r.input();
    r.display_area();
    return 0;
}