#include<bits/stdc++.h>
using namespace std;
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
    cout<<ind(arr,n)<<endl;
    return 0;
}