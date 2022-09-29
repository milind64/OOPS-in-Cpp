#include <iostream>
using namespace std;

class Calculator{
    int a, b;
    char opr;

    public:
    void operation(){
        cout<<"Enter the first number: ";
        cin>>a;
        cout<<endl<<"Choose an Operator ?"<<endl;
        cout<<endl<<"Use '+' to add"<<endl;
        cout<<"Use '-' to subtract"<<endl;
        cout<<"Use '*' to multiply"<<endl;
        cout<<"Use '/' to divide"<<endl;
        cout<<"Enter the operator: ";
        cin>>opr;
        cout<<"\nEnter the second number: ";
        cin>>b;

        switch(opr){
            case '+':
                cout <<"\nAns = "<< (float) a + b << endl;
                break;
            case '-':
                cout <<"\nAns = "<< (float) a - b << endl;
                break;
            case '*':
                cout <<"\nAns = "<< (float) a * b << endl;
                break;
            case '/':
                cout <<"\nAns = "<< (float) a / b << endl;
                break;
            default:
                cout << "\nInvalid Input!";
        }
        
    }

};

int main(){
    char ch;
    Calculator c;
    do{
        c.operation();
        cout<<"\nDo you want to do calculation?"<<endl;
        cout<<"\tEnter y for Yes"<<endl;
        cout<<"\tEnter n for No"<<endl;
        cin>>ch;
    }while((ch == 'y') || (ch == 'Y'));
}