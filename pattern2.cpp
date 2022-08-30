#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int n; cin>>n;
    //for increasing part
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //for decreasing part
    for(int i=1; i<=n-1; i++){
        for(int j=n-i; j>=1; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}