#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout <<"Enter Array size: ";
    cin >>n;
    int arr[n];
    cout <<"Enter Array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        int minIdx=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIdx])
            {
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
    
}