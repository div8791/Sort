#include<bits/stdc++.h>
using namespace std;
void bs(vector<int> &a, int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
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
    bs(a, n);
    for(auto &i: a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}