#include <bits/stdc++.h>
using namespace std;

void reverse(long long a[], long long l, long long r)
{
    while (l < r)
    {
        swap(a[l], a[r]);
        l++;
        r--;
    }
}

void solve()
{
    long long int n, k;
    cin >> n >> k;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reverse(a, 0, n - 1);
    reverse(a, 0, k - 1);
    reverse(a, k, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
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
