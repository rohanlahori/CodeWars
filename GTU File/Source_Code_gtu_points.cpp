// Author.... Rohan R Lahori

#include <iostream>
#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x>=40 && y>=50 && z>=10)
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";   
        }
    }
}