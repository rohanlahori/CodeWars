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


void solve() {
	ll n, k; cin >> n;
	assert((n >= 1 && n <= 1e5));
	vll h(n), s(n);
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> h[i];
		assert((h[i] >= 1 && h[i] <= 1e9));
	}
	for (int j = 0; j < n; j++) {
		cin >> s[j], ans -= s[j];
		assert((s[j] >= 1 && s[j] <= 1e9));
	}
	set<pair<ll, ll>>profit;
	vb used(n, 0);
	cin >> k;
	assert((k > 0 && k <= 1e9));

	for (int i = 0; i < n; i++) {
		profit.insert(mp(-1LL * (s[i] + h[i]), i));
	}
	while (k > 0) {
		k--;
		auto it = profit.begin();
		pll curr = *it;
		ans += (-1LL * curr.F);
		if (used[curr.S]) {
			// do nothing
			break;
		}
		else {

			used[curr.S] = 1;
			profit.erase(it);
			curr.F += s[curr.S];
			profit.insert(curr);
		}
	}
	auto it = profit.begin();
	pll curr = *it;
	ans += (k) * (-1LL * curr.F);
	cout << ans << endl;

}



bool TestCase1 = 1;
bool isGoogles = 0;



//////////////////////////////////////////////////////////////////




//////////////////////////////////////////////////////////

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	t = 1;



	if (TestCase1) {
		cin >> t;
	}
	assert((t > 0 && t < 11));
	while (t--) {
		solve();
	}
	return 0;
}
