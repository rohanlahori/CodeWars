// Qg3
// //g++ -std=c++17 -O2 -Wall a.cpp -o test
// _()_
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define vb vector<bool>
#define pi pair<int,int>
#define pll pair<ll,ll>
#define vp vector<pi>
#define vpll vector<pll>
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define F first
#define S second
#define For(i,a,b) for(ll i=a;i<b;i++)
#define debug2(x,y) cout << "\033[" << 31 << "m" <<"Debug "<<#x<<" -> "<< x<<" | "<<#y<<" -> "<<y << "\033[" << 39 << "m"<<endl;
#define debug(x) cout << "\033[" << 31 << "m" <<"Debug "<<#x<<" -> "<< x << "\033[" << 39 << "m"<<endl;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define mint map<int,int>
#define mall map<ll,ll>
#define ciN cin
#define gu(a,s) get<a>(s)
#define tin tuple<ll,ll,ll>
#define ter(x,y,z) ((x)?y:z)

/////////////
const ll maxn = 1e3 + 3;
const ll nax = 1e3 + 2;
const ll max_val = 5e4 + 10;
const ll mod = 1e9 + 7;
const ll bits = 18;
ll caseNumber = 1;
#define endl "\n"
/////////////////////////////////////////////////////////////////

const int N_from  = 5e4;
const int N_to    = 1e5;
const int val_from = 1;
const int val_to = 1e9;
const int k_from = 1;
const int k_to = 1e9;
std::random_device                  rand_dev;
std::mt19937                        generator(rand_dev());

void solve() {
	std::uniform_int_distribution<int>  N_gen(N_from, N_to);
	std::uniform_int_distribution<int> val_gen(val_from, val_to);
	std::uniform_int_distribution<int>k_gen(k_from, k_to);
	ll n, k; n = N_gen(generator);
	cout << n << endl;

	for (int i = 0; i < n; i++) {
		cout << val_gen(generator) << " ";
	}
	cout << endl;
	for (int j = 0; j < n; j++)cout << val_gen(generator) << " ";
	cout << endl;
	cout << k_gen(generator) << endl;
}



bool TestCase1 = 1;
bool isGoogles = 0;



//////////////////////////////////////////////////////////////////




//////////////////////////////////////////////////////////

int main() {
	freopen("in09.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	t = 1;



	if (TestCase1) {
		t = 10;
	}
	cout << t << endl;
	while (t--) {
		solve();
	}
	return 0;
}
