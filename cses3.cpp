#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define F1(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define P(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define P1(a,n) for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define AS 200001


int main(){
  
      string s;
      cin>>s;
      char l='A';
      int ans=0,c=0;
      for(char d:s)
      {
      	if(d==l)
      	{
      		c++;
      		ans=max(ans,c);
      		
		}
		else
		{
			l=d;
			c=1;
		}
	  }
	  cout<<ans;


	return 0;
}

