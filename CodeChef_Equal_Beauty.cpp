#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        int num;
        ll temp1 = 0, temp2 = 0, b1, b2, k;
        ll ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll l = 1, r = n - 2;

        if (n == 2)
        {
            cout << 0 << endl;
            continue;
        }
        else if (n == 3)
        {
            cout << min((v[1] - v[0]), (v[2] - v[1])) << endl;
            continue;
        }
        for (ll i = 0; i < n - 1; i++)
        {
            temp1 += abs(v[i] - v[(n - 1) / 2]);
        }
        for (ll i = 1; i < n; i++)
        {
            temp2 += abs(v[i] - v[1 + (n - 1) / 2]);
        }
        ans= min(temp2, temp1);

        while (l < r)
        {
            b2 = v[n - 1] - v[l],
            b1 = v[r] - v[0];
            ans = min(ans, abs(b2 - b1));
            if (b1 < b2)
                l++;
            else
                r--;
        }
        cout << ans << endl;
    }

    return 0;
}
