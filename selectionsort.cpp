#include<bits/stdc++.h>
using namespace std;
void ss(vector<int> &a, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
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
    ss(a, n);
    for(auto &i: a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}