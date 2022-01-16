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
    ll m, s;
    cin >> m >> s;
    ll diff = 9 * m - s;

    if (s == 0 && m != 1)
    {
        cout << "-1 -1";
        return;
    }

    if (m == 1)
    {
        cout << s << " " << s;
        return;
    }

    if (diff <= 0)
    {
        cout << "-1 -1" << ln;
        return;
    }

    v64 dummy, mini, maxi;
    int temp = s;

    for (ll i = 0; i < m && temp >= 0; i++)
    {
        dummy.pb(min(temp, 9));
        temp -= min(temp, 9);
    }

    forn(i, dummy.size())
    {
        maxi.pb(dummy[i]);
    }
    // now smallest
    reverse(all(dummy));
    forn(i, dummy.size())
    {
        mini.pb(dummy[i]);
    }
    if (mini[0] == 0)
    {
        mini[0] = 1;
    }
    // ___________________________________________
    for (auto t : mini)
    {
        cout << t;
    }
    cout << " ";
    for (auto t : maxi)
    {
        cout << t;
    }
    cout << ln;
}
int main()
{
    fast_cin();
    ll t = 1;
    //cin >> t;
    for (int it = 1; it <= t; it++)
    {
        solve();
    }
    return 0;
}