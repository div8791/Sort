#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int n; cin>>n;
    int t = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<t<<" ";
            t++;
        }
        cout<<endl;
    }
    return 0;
}