#include<iostream>
#include<unordered_map>
using namespace std;

void input(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

int solve(int arr[], int n)
{
    unordered_map<int, bool> m;
    int ans;

    for(int i=0;i<n;i++)
    {
        if(m[arr[i]] == false)
        {
            m[arr[i]] = true;
        }
        else
        {
            ans = arr[i];
        }
    }
    return ans;
}