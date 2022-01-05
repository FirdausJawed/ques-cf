#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 1000000007;
double eps = 1e-12;
#define forn(i, n) for (ll i = 0; i < n; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define al(arr, n) arr, arr + n
#define sz(x) ((ll)(x).size())

void solve()
{
    ll n;
    cin >> n;
    v64 a(n), b(n);
    vp64 v;
    ll cnt = 0;
    int sa = 0, sb = 0;
    forn(i, n)
    {
        cin >> a[i];
        sa += a[i];
    }

    forn(i, n)
    {
        cin >> b[i];
        sb += b[i];
    }

    if (sa - sb != 0)
    {
        cout << -1 << ln;
        return;
    }

    forn(i, n)
    {
        ll j = i + 1;
        if (a[i] == b[i])
        {
            continue;
        }
        else if (a[i] < b[i])
        {
            while (a[i] < b[i])
            {
                if (a[j] > b[j])
                {
                    a[j]--;
                    a[i]++;
                    cnt++;
                    v.pb(mp(j + 1, i + 1));
                    continue;
                }
                j++;
            }
        }
        else if (a[i] > b[i])
        {
            while (a[i] > b[i])
            {
                if (a[j] < b[j])
                {
                    a[j]++;
                    a[i]--;
                    cnt++;
                    v.pb(mp(i + 1, j + 1));
                    continue;
                }
                j++;
            }
        }
    }
    cout << cnt << ln;
    forn(i, cnt)
    {
        cout << v[i].first << " " << v[i].second << ln;
    }
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        solve();
    }
    return 0;
}