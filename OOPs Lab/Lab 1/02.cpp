#include<iostream>
using namespace std;

float gross_pay(float bp){
    float da, hra;
    da = (bp*40)/100;
    hra = (bp*20)/100;
    return bp+da+hra;
}

int main(){
    float bp;
    cout<<"Enter your Base Pay : ";
    cin>>bp;
    cout<<"Total Gross Pay : "<<gross_pay(bp)<<endl;
    return 0;
}