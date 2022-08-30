#include<bits/stdc++.h>
using namespace std;
int bs(vector<int> &arr, int s, int e, int n, int key)
{
    while(s<e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}
int ind(vector<int> &arr, int n)
{
    int l = 0, h = n-1;
    while(l<h)
    {
        if(arr[l]<arr[h])
        {
            h--;
        }
        if(arr[l]>arr[h])
        {
            l++;
        }
        if(arr[l]==arr[h])
        {
            return h;
        }
    }
    return -1;
}
signed main()
{
    int n; cin>>n;
    vector<int> arr(n);
    for(auto &i: arr)
    {
        cin>>i;
    }
    int key; cin>>key;
    int minidx = ind(arr,n);
        cout<<bs(arr,0,minidx-1,n,key)<<endl;
        cout<<bs(arr,minidx,n-1,n,key)<<endl;
    return 0;
}