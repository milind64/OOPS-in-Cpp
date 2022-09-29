#include <iostream>
using namespace std;

int max_subarr(int array[],int n){

    int currentsum = 0;
    int maxsum = 0;

    for (int i = 0; i < n; i++)
    {
        currentsum = currentsum + array[i];

        if (currentsum < 0)
        {
            currentsum = 0;
        }

        if (maxsum < currentsum)
        {
            maxsum = currentsum;
        }
    }
    return maxsum;
}

int main()
{
    int n;

    cout << "Enter the size of array : " << endl;
    cin>> n;

    int arr[n];

    cout << "Enter the elements of array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum sum is : " << max_subarr(arr,n) << endl;
    
    return 0;
}