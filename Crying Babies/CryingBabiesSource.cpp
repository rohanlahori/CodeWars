#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include"bits/stdc++.h"
using namespace std;
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

// Author Naveez Khoja
bool tc = 1;
void getans() {
    int n; cin >> n;

    vi a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vi inds;

    for (int i = 1; i < n - 1; ++i)
    {
        if (!a[i] && a[i - 1] == 1 && a[i + 1] == 1) {
            inds.push_back(i);
        }
    }
    int ct = 0;
    for (int i = 1; i < inds.size(); ++i)
    {
        if (inds[i] - inds[i - 1] == 2) {
            ct++;
            i++;
        }
    }

    cout << inds.size() - ct << nl;
}

void stresstest() {

}
int main() {

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll T = 1;
    if (tc) cin >> T;
    while (T--) {
        getans();
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif

    return 0;
}