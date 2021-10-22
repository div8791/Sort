//use for sorting an array of 0s, 1s, and 2s 
//if 0, swap arr[low] and arr[mid], low++, mid++
//if 1, mid++
// if 2, swap arr[mid] and arr[high], high--
#include<bits/stdc++.h>
using namespace std;
void swap(int arr[], int i, int j)
{
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}
void dnfsort(int arr[], int n)
{
    int low =0;
    int mid = 0;
    int high = n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr, low, mid);
            low++; mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr, mid, high);
            high--;
        }
    }
}
signed main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    dnfsort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
