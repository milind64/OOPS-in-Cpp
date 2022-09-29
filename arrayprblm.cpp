#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int minimum(int arr[5])
{
    // int i = 0;
    int min = arr[0];
    for( int i= 0;i<5;i++)
    {
        if(min > arr[i])
         min = arr[i];
    }
}

int main()
{
    int arr[5]={6,4,3,2,1};
    int arr1[5]={10,20,30,40,50};

    
    return 0;

}