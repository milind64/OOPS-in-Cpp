#include <iostream>
using namespace std;

float Fahrenheit_to_Centigrade(float f){
    float c;
    c = ((f-32)*5)/9;
    return c;
}

int main(){
    float f;
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>f;
    cout<<"Centigrade: "<<Fahrenheit_to_Centigrade(f)<<endl;
    return 0;
}