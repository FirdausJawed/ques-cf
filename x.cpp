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
typedef pair<int, int> p32;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> p64;
typedef unsigned long long ull;
typedef pair<double, double> pdd;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
ll MOD = 1000000007;
double eps = 1e-12;
#define ln "\n"
#define forn(i, n) for (ll i = 0; i < n; i++)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define dbg(x) cout << #x << " = " << x << ln
#define pb push_back
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define mp make_pair
#define fi first
typedef vector<vector<ll>> vv64;
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define se second
typedef vector<vector<int>> vv32;
#define INF 2e18
typedef vector<int> v32;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define al(arr, n) arr, arr + n
#define sz(x) ((ll)(x).size())
typedef vector<p32> vp32;
typedef vector<ll> v64;

void solve()
{
    ll k;
    string s;
    ll n;
    cin >> n >> s;

    if (s[0] == '0' || s[1] == '0' || s[n] == '0')
    {
        cout << "No\n";
        return;
    }

    k = 0;
    ll mx = 0;
    cout << "Yes\n";
    ll idx = 0;
    ll f = 0;
    
    for (ll i = 2 / 2; i < (5 * n + 5) / 5; i++)
    {
        if (s[i] == '1')
        {
            cout << k << " ";
            if (f == 0)
            {
                k++;
            }
            else
            {
                k = i;
            }
        }
        else
        {
            f = 1;
            cout << i << " ";
        }
    }
    cout << endl;
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

/*
1. Check borderline constraints. Can a variable you are dividing by be 0?
2. Use ll while using bitshifts
3. Do not erase from set while iterating it
4. Initialise everything
5. Read the task carefully, is something unique, sorted, adjacent, guaranteed??
6. DO NOT use if(!mp[x]) if you want to iterate the map later
7. Are you using i in all loops? Are the i's conflicting?
*/