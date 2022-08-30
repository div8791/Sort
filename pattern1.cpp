#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	//for increasing
	for(int i=1; i<=n; i++){
		for(int space=1; space<=n-i; space++){
			cout<<" ";
		}
		for(int star = 1; star<=2*i-1; star++){
			cout<<"*";
		}
		cout<<endl;
	}
	//for decreasing
	for(int i=1; i<=n; i++){
		for(int s=0; s<=i-1; s++){
			cout<<" ";
		}
		for(int st=1; st<=2*(n-i)-1; st++){
			cout<<"*";
		}
		cout<<endl;
	}
    return 0;
}
  