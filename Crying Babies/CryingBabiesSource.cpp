#include <iostream>
#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;
<<<<<<< HEAD
const int mod = 1e9 + 7;
#define ll long long
#define ld long double
#define f first
#define s second
#define pb push_back
#define MP make_pair
#define vi vector<int>
#define vll vector<ll>
#define all(x) x.begin(),x.end()
#define mint map<int,int>
#define llmint map<ll,ll>
#define pl pair<ll,ll>
#define pi pair<int,int>
#define nline cout << nl;
#define sp " "
#define nl "\n"


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#define debug2(x,y) cerr << #x <<" "; _print(x); cerr << sp; cerr << #y <<" "; _print(y); cerr << endl;
#else
#define debug(x)
#define debug2(x,y)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.f); cerr << ","; _print(p.s); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


bool tc = 1;
void getans() {
    string s; cin >> s;

    int n = s.length();

    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        if (i && s[i] == s[i - 1]) {
            ans++;
            s[i] = '!';
        }
        else {
            if (i > 1) {
                if (s[i] == s[i - 2]) {
                    ans++;
                    s[i] = '@';
                }

=======
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
>>>>>>> a6842c654e9bd05277f64fe17260a73dc10c421c
            }
        }
        cout<<cnt<<"\n";
    }
<<<<<<< HEAD

    cout << ans << nl;
}

void stresstest() {

=======
>>>>>>> a6842c654e9bd05277f64fe17260a73dc10c421c
}
