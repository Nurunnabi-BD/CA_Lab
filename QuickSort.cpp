#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int st, int end)
{
    int indx=st-1, pivot=arr[end];
    for (int j = st; j < end; j++)
    {
        if(arr[j]<=pivot)
        {
            indx++;
            swap(arr[j],arr[indx]);
        }
    }
    indx++;
    swap(arr[end], arr[indx]);
    return indx;
}

void quickSort(int arr[], int st, int end)
{
    if(st<end)
    {
       int pivoIdx=partition(arr, st, end);
        quickSort(arr,st,pivoIdx-1);
        quickSort(arr,pivoIdx+1,end);
    }
}

int main(){
    int n;
    cout <<"Enter Array size: ";
    cin >>n;
    int arr[n];
    cout <<"Enter Array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    quickSort(arr, 0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
    
}