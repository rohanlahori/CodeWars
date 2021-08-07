#include <iostream>
#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;
#define ll long long 
#define f(i,x,z) for(ll i=x;i<z;i++)

int main()
{
	// freopen("inp.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	ios::sync_with_stdio(0);// Input and output clearance
	cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];    
        f(i,0,n)
        {
            cin>>a[i];
        }
        ll cnt=0;
        f(i,1,n-1)
        {
            if(a[i]==0 && a[i-1]==1 && a[i+1]==1)
            {
                a[i+1]=0;
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
}
