#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define nline cout << "\n";

void getans() {
    ll n, k; cin >> n >> k;

    ll pos1;

    long double D = sqrt(1 + 4 * 2 * k);

    double ans = ((-1 + D) / 2);

    pos1 = (int) ans;

    if (pos1 - ans < 0) {
        pos1++;
    }

    ll pos = pos1;

    pos1 = (n - (pos1));

    ll pos2 = abs(k - (pos * (pos + 1) / 2));

    pos2 = pos1 + pos2 + 1;

    for (int i = 1; i < n + 1; ++i) {

        if (i == pos1 || i == pos2) {
            cout << 'd';
            continue;
        }
        cout << 'c';

    }
    nline;


}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;

    while (t--) {
        getans();
    }

    return 0;
}