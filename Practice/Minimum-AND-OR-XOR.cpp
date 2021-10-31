#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long int ans = a[0] ^ a[1], current_min = a[0] ^ a[1];
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        long long int x = (a[i] & a[i + 1]) ^ (a[i] | a[i + 1]);
        current_min = min(current_min, x);
        ans = min(ans, current_min);
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}