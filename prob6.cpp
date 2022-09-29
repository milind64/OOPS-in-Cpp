// #include <iostream>
// using namespace std;


// class tollbooth 
// {
//     public:
//     int count;
//     double amt;

// };

// int main()
// {
//     tollbooth t;
//     cout<<"Enter the no. of 4 "<<endl;
//     cin>>t.count;
//     t.amt = t.count * 50.00;
//     cout<<"Total Amount collected by booth = "<<t.amt<<endl;
//     return 0;

// }


#include <iostream>
using namespace std;


class tollbooth 
{
    public:
    int count;
    double amt;
    tollbooth(){
        count = 0;
        amt = 0.0;
    }

    void payingVehicles();
    void nonPayingVehicles();
    void displayCashCollected();
};

void tollbooth::payingVehicles()
{
    count++;
    amt += 50.0; 
}
void tollbooth::nonPayingVehicles()
{
    count++;
}

void tollbooth::displayCashCollected()
{
    cout<<"No. of Cars "<<count<<endl;
    cout<<"Cash Collected "<<amt<<endl;
}

int main()
{
    tollbooth t;
    
    return 0;

}