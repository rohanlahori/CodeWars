#include"bits/stdc++.h"
using namespace std;

#define vll vector<long long>
#define nl "\n"


void getans() {
    int n; cin >> n;

    vll a(n);

    int ct = 0, ct2 = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];

        if (a[i] % 9 == 0) ct++;

        else if (a[i] % 3 == 0) ct2++;
    }

    if (n == 1 && ct2 == 1) {
        cout << "NO" << nl;
        return;
    }

    n -= ct2;

    if (n == 1 && ct == 0) {
        cout << "NO" << nl;
        return;
    }
    if (ct2 == 0) {
        cout << (ct >= (n / 2) ? "YES" : "NO") << nl;
        return;
    }

    else
        cout << (ct >= ((n % 2) ? (n / 2) + 1 : (n / 2)) ? "YES" : "NO") << nl;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;

    while (t--)
        getans();

    return 0;
}