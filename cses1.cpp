#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long int
#define F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define F1(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define P(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define P1(a,n) for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define AS 200001


int main(){

      long long int n;
      cin>>n;
        //int temp=n;
       // int sum=0;
       if(n==1)
       {
       	cout<<n;
	   }
	   else
	   {
	   	cout<<n<<" ";
	   }
        
        while(n!=1)
        {
        	if(n&1)
        	{
        		n=3*n+1;
        		
        		cout<<n<<" ";
			}
			else
			{
				n=n/2;
			
				cout<<n<<" ";
			}
		}


	return 0;
}

