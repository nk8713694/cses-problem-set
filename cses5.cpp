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
    if(n==1)
    {
    	cout<<1;
    	return 0;
	}
	if(n==2 || n==3)
	{
		cout<<"NO SOLUTION";
		return 0;
	}
    if(n%2==0)
    {
    	for(int i=2;i<=n;i+=2)
    	{
    		cout<<i<<" ";
		}
		for(int i=1;i<n;i+=2)
		{
			cout<<i<<" ";
		}
	}
	else
	{
		for(int i=1;i<=n;i+=2)
    	{
    		cout<<i<<" ";
		}
		for(int i=2;i<n;i+=2)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}

