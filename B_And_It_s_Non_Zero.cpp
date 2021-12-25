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
ll v[18][200002];
vector<ll> lg;

// bool isPowerOfTwo(int n)
// {
//     if (n == 0)
//         return 0;
//     while (n != 1)
//     {
//         if (n%2 != 0)
//             return 0;
//         n = n/2;
//     }
//     return 1;
// }

void solve()
{
    ll answer = INT_MIN;

    ll l, r;

    cin >> l >> r;

    for (ll i = 0; i < 18; i++)
    {
        answer = max(answer, (v[i][r] - v[i][l - 1]));
    }

    cout << (r - l + 1) - (answer) << endl;
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (ll i = 1; i <= 200000; i++)
    {
        if ((i & (i - 1)) == 0)
            lg.push_back(i);
    }

    cout << endl;

    for (ll i = 0; i < 18; i++)
    {
        ll cnt = 0;
        for (ll j = 1; j <= 200000; j++)
        {
            if ((lg[i] & j) != 0)
            {
                v[i][j] = 1 + v[i][j - 1];
            }
            else{
                v[i][j] = v[i][j - 1];
            }
        }
    }

    for (int it = 1; it <= t; it++)
    {
        solve();
    }
    return 0;
}