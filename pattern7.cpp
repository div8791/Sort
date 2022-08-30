#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int n; cin>>n;
    int ch = 65;
	for(int i=1; i<=n; i++){
		for(int space=1; space<=n-i; space++){
			cout<<" ";
		}
		for(int c = 1; c<=i; c++){
			cout<<char(ch);
            ch++;
		}
        ch--;
        for(int d=1; d<=i-1; d++){
            ch--;
            cout<<char(ch);
        }
		cout<<endl;
	}
    return 0;
}
