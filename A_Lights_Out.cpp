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

void toggle(int &x)
{
    if (x == 1)
    {
        x = 0;
    }
    else
    {
        x = 1;
    }
}

void resultant_array(int arr[3][3], int i, int j)
{
    toggle(arr[i][j]);
    if (j < 2)
    {
        toggle(arr[i][j + 1]);
    }
    if (i < 2)
    {
        toggle(arr[i + 1][j]);
    }
    if (j > 0)
    {
        toggle(arr[i][j - 1]);
    }
    if (i > 0)
    {
        toggle(arr[i - 1][j]);
    }
}
void solve()
{
    int arr[5][5];
    int ans[3][3];
    int n = 3;
    forn(i, n)
    {
        forn(j, n)
        {
            cin >> arr[i][j];
            ans[i][j] = 1;
            if (arr[i][j] % 2 == 1)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }

    forn(i, n)
    {
        forn(j, n)
        {
            if (arr[i][j] == 1)
            {
                resultant_array(ans, i, j);
            }
        }
    }

     forn(i, n)
    {
        forn(j, n)
        {
            cout<<ans[i][j];
        }
        cout<<ln;
    }
}
int main()
{
    fast_cin();
    // ll t;
    // cin >> t;
    // for (int it = 1; it <= t; it++)
    // {
        solve();
    // }
    return 0;
}