#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int n; cin>>n;
    int t = n;
    vector<int> temp;
    int ans = 0;
    while(t!=0){
        int r = t%10;
        temp.push_back(r);
        t = t/10;
    }
    for(int i=0; i<temp.size(); i++){
        if(temp[i]!=0 && n%temp[i]==0){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}