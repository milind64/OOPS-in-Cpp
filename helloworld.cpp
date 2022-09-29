#include <iostream>
using namespace std;

class Valorant
{
    public:
    // string ultimate;
    // int power;
    // string bestPlayer;

    int myFunc(int n);

};

int Valorant::myFunc(int n){
    return(n);
}


//* Driver function
int main()
{
    
    // cout<<"Hello World ";


    // char arr[] = "Welcome to C++ and OOP";
    // cout<<"Value of the array is : "<<arr<<endl; 
    

    // int age;
    // cout<<"Enter your age ?"<<endl;
    // cin>>age;
    // cout<<"Age is : "<<age<<endl;


    // int num;
    // cout<<"Enter your Number ?"<<endl;
    // cin>>num;
    // if(num >= 90 && num<=100)
    // {
    //     cout<<"A+ Grade";
    // }
    // else if(num >= 80 && num<=90)
    // {
    //     cout<<"A Grade";
    // }
    // else if(num >= 70 && num<=80)
    // {
    //     cout<<"B Grade";
    // }
    // else if(num >= 60 && num<=70)
    // {
    //     cout<<"C Grade";
    // }
    // else 
    // {
    //     cout<<"D Grade";
    // }


    // Valorant chamber;
    
    // chamber.ultimate = "Tour De Force";
    // chamber.power = 200;
    // chamber.bestPlayer = "Rahul Singh";
    
    // cout<<chamber.power<<" "<<chamber.ultimate<<" "<<chamber.bestPlayer<<endl;


    // * Calling Outside Method
    Valorant chamber;      //*Create an object of Valorant
    int n = chamber.myFunc(5);     //*Calling the Function
    cout<<n;
    
    return 0;
}