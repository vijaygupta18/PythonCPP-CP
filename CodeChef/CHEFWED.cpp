#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--) {
        ll n, k;
        cin >> n >> k;
        ll a[n + 1];
        map<ll, ll> q;
        ll s = 0, vc = 0, t = 1;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll l[n + 1][n + 1] = {0};
        for(ll i = 0; i < n; i ++) {
            for(ll j = 0; j < n; j++) {
                l[i][j] = 0;
            }
        }
        for(ll i = 0; i < n; i++) {
            q.clear();
            for(ll j = i; j < n; j++) {
                l[i][j] = (j == 0)?0:l[i][j - 1];
                if (q.count(a[j])) {
                    if (q[a[j]] == 1) {
                        l[i][j]++;
                    }
                    l[i][j]++;
                }
                q[a[j]]++;
            }
        }
        s = 1e18;
        ll ta = 100;
        ll dp[101][1001] = {0};
        for(int i = 0; i <= ta; i++) {
            for(ll j = 0; j <= ta; j++) {
                dp[i][j] = 0;
            }
        }
        for(ll i = 1; i < n + 1; i++) {
            dp[1][i] = l[0][i - 1];
        }
        for(ll i = 2; i <= ta; i++) {
            dp[i][1] = 0;
        }
        for(ll i = 2; i <= ta; i++) {
            for(ll j = 2; j <= n; j++) {
                ll z = 1e18;
                for(ll p = 1; p < j; p++) {
                    z = min(z, dp[i - 1][p] + l[p][j - 1]);
                }
                dp[i][j] = z;
            }
        }
        for(ta = 1; ta <= 100; ta++) {
            s = min(ta * k + dp[ta][n], s);
        }
        cout << s << endl;
    }
    return 0;
}