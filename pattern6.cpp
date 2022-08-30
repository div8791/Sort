#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int n; cin>>n;
    for(int i=n; i>=1; i--){
        for(int j=i; j<=n; j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}