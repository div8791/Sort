#include<bits/stdc++.h>
using namespace std;
void ins(vector<int> &a, int n)
{
    for(int i=1; i<n; i++)
    {
        int curr = a[i];
        int j= i-1;
        while(a[j]>curr && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = curr;
    }
}
signed main()
{
    int n; cin>>n;
    vector<int> a(n);
    for(auto &i: a)
    {
        cin>>i;
    }
    ins(a, n);
    for(auto &i: a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
