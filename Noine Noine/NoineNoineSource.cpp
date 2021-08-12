#include"bits/stdc++.h"
using namespace std;

#define vll vector<long long>
#define nl "\n"


void getans() {
    int n; cin >> n;

    vll a(n);

    int ct9 = 0, ct3 = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];

        if (a[i] % 9 == 0) ct9++;

        else if (a[i] % 3 == 0) ct3++;
    }

    n -= ct3;

    if (ct3 == 0) {
        cout << (ct9 >= (n / 2) ? "YES" : "NO") << nl;
        return;
    }

    else
        cout << (ct9 >= ((n % 2) ? (n / 2) + 1 : (n / 2)) ? "YES" : "NO") << nl;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
        getans();

    return 0;
}