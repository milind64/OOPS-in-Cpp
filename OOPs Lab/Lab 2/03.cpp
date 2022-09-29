#include <iostream>
using namespace std;
class Patient
{
public:
    string name;
    string date_of_admission;
    string disease;
    string date_of_discharge;
};
class inputPatient : public Patient
{
    public:
    int age;
    void input()
    {
        cout << "\nEnter Name: ";
        cin >> name;
        cout << "Enter Date of Admission: ";
        cin >> date_of_admission;
        cout << "Enter Disease: ";
        cin >> disease;
        cout << "Enter Date of Discharge: ";
        cin >> date_of_discharge;
        cout << "Enter Age: ";
        cin >> age;
    }
    void print()
    {
        cout<<endl<<"Details of Patient: \n"<<endl;
        cout << "Name = " << name << endl;
        cout << "Date of Admission = " << date_of_admission << endl;
        cout << "Disease = " << disease << endl;
        cout << "Date of Discharge = " << date_of_discharge << endl;
        cout << "Age = " << age<<endl;
    }
};
int main()
{
    int n, i;
    cout << "Enter no. of patients ";
    cin >> n;
    inputPatient p[n];
    for (i = 0; i < n; i++)
    {
        p[i].input();
    }
    cout << "Patients are" << endl;
    for (i = 0; i < n; i++)
    {
        p[i].print();
    }
    cout <<"\n\nPediatric Patients are" << endl;
    for (i = 0; i < n; i++)
    {
        if (p[i].age < 12)
            p[i].print();
    }
    return 0;
}