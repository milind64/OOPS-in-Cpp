#include <iostream>
using namespace std;

void input(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

int floor(int arr[], int n, int k)
{
    int st = 0;
    int en = n-1;
    int mid = st + (en-st)/2;

    while(st < en)
    {
        if(arr[mid] == k)
        {
            return k;
        }
        if(arr[mid] < k)
        {
            st = mid;
        }
        else
        {
            en = mid-1;
        }

        mid = st + (en-st)/2;

    }
    return arr[en];
}

int ceil(int arr[], int n, int k)
{
    int st = 0;
    int en = n-1;
    int mid = st + (en-st)/2;

    while(st < en)
    {
        if(arr[mid] == k)
        {
            return k;
        }
        if(arr[mid] < k)
        {
            st = mid + 1;
        }
        else
        {
            en = mid;
        }

        mid = st + (en-st)/2;

    }
    return arr[en];
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements in the array\n";
    input(arr, n);

    int k;
    cout<<"Enter the value: ";
    cin>>k;

    cout<<"Floor: "<<floor(arr, n, k)<<endl;
    cout<<"Ceil: "<<ceil(arr, n, k)<<endl;

    return 0;
}