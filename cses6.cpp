#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define F1(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define P(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define P1(a,n) for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define AS 200001


int main(){


      int t;
      cin>>t;
      while(t--)
      {
      	ll y,x,ans=0;
      	cin>>y>>x;
      	ll z=max(y,x);
      	ll z2=(z-1)*(z-1);
      	
      	if(z%2)
      	{
      	   if(y==z)
			{
			 ans=z2+x;	
		    }
		    else
		    {
		    	ans=z2+2*z-y;
			}
		}
		else
		{
		  if(x==z)
			{
			 ans=z2+y;	
		    }
		    else
		    {
		    	ans=z2+2*z-x;
			}	
		}
		cout<<ans<<endl;
	  }
	  
	return 0;
}

