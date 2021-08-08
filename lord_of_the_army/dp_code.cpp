//Classic
//g++ -std=c++17 -O2 -Wall a.cpp -o test
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
#define endl "\n"
#define debug2(x,y) cout<<"This side ----> "<<#x<<" -> "<<x<<" | "<<#y<<" -> "<<y<<endl;
#define debug(x) cout<<"This side    ----> "<<#x<<" -> "<<x<<endl
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define mint map<int,int>
#define mall map<ll,ll>
#define ciN cin
#define g(a,s) get<a>(s)
#define tin tuple<ll,ll,ll>
#define ter(x,y,z) ((x)?y:z)
#define PI 3.14159265
bool isGoogles = 0;
const ll maxn = 1e5 + 10;
const ll max_val = 2e5 + 10;
const ll mod = 100000000;
const ll bits = 10;
ll caseNumber = 1;
////////////////////////////////////////////////////////////////
/*

*/
ll n1, n2, k1, k2;
ll dp[101][101][11][11];
ll work(ll hor, ll men, ll canhor, ll canmen) {
	if (dp[hor][men][canhor][canmen] != -1) {
		return dp[hor][men][canhor][canmen];
	}
	ll tot = hor + men;
	if (tot == 0)return 1;
	ll ans = 0LL;
	if (hor > 0 && canhor > 0) {
		ans += work(hor - 1, men, canhor - 1, k2);
		ans %= mod;
	}
	if (men > 0 && canmen > 0) {
		ans += work(hor, men - 1, k1, canmen - 1);
		ans %= mod;
	}
	ans %= mod;
	return dp[hor][men][canhor][canmen] = ans;
}
void jabru() {
	for (int i = 0; i < 101; i++)
		for (int j = 0; j < 101; j++)
			for (int k = 0; k < 11; k++)
				for (int l = 0; l < 11; l++)
					dp[i][j][k][l] = -1;
	cin >> n1 >> n2 >> k1 >> k2;
	work(n1, n2, k1, k2);
	cout << dp[n1][n2][k1][k2] << endl;



}
bool TestCase = 0;


//////////////////////////////////////////////////////////////////




int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	t = 1;
	if (TestCase) {
		cin >> t;
	}
	while (t--) {
		if (isGoogles) {cout << "Case #" << caseNumber << ": ";} caseNumber++;
		jabru();
	}
	return 0;
}
