#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define F1(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define P(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define P1(a,n) for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define AS 200001


int main(){


    int n;
    cin>>n;
    
    int mx=0;
	ll ans=0;
    for(int i=0;i<n;i++)
    {
    	int x;
    	cin>>x;
    	mx=max(mx,x);
    	ans+=mx-x;
	}
	cout<<ans<<endl;

	return 0;
}

