#include<bits/stdc++.h>
using namespace std;
long long fun(int n){
    if(n==1){
        return 1;
    }
    return ((n*n*n)+fun(n-1));
}
signed main()
{
    long long n; cin>>n;
    cout<<fun(n);
    return 0;
}