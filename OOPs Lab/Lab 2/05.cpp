#include<iostream>
using namespace std;

class tollbooth{
    unsigned int cars;
    double collection;

    public:
    tollbooth(){
        cars = 0;
        collection = 0;
    }

    void payingVehicles(){
        cars++;
        collection += 50;
    }

    void nonPayingVehicles(){
        cars++;
    }
    void display(){
        cout<<"Total cars: "<<cars<<endl;
        cout<<"Total collection: "<<collection<<endl;
    }

};

int main(){
    tollbooth b;
    unsigned int ch;

    cout<<"Enter your choice, Press: "<<endl;
    cout<<"0 - Paying Vehicle"<<endl;
    cout<<"1 - Non Paying Vehicle"<<endl;
    cout<<"2 - Exit"<<endl<<endl;
    while(ch != 2){
        cout<<"Enter your choice: ";
        cin>>ch;
        if(!ch){
            b.nonPayingVehicles();
        }
        else if(ch == 1){
            b.payingVehicles();
        }
        else{
            b.display();
            break;
        }
    }
    
    return 0;
}

