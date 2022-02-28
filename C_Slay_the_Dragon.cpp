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
    ll n, sum = 0;
    cin >> n;
    v64 arr;
    forn(i, n)
    {
        ll t;
        cin >> t;
        arr.pb(t);
        sum += arr[i];
    }

    sort(all(arr));
    ll q;
    cin >> q;
    while(q--){
        ll d, a;
        cin >> d >> a;

        ll idx1 = lower_bound(all(arr), d) - arr.begin();
        ll idx2 = lower_bound(all(arr), d) - arr.begin()-1;

        if (idx1>n-1)
        {
            idx1 = n - 1;
        }
        if (idx2<0)
        {
            idx2 = 0;
        }
        ll s1 = arr[idx1],s2=arr[idx2];

        ll  r1 = sum - s1;
        ll  r2 = sum - s2;

        ll c1 = max(d - s1, 0ll) + max(a - r1, 0ll);
        ll c2 = max(d - s2, 0ll) + max(a - r2, 0ll);
        cout << min(c1, c2)<<ln;
    }
}
int main()
{
    fast_cin();
    ll t = 1;
    // cin >> t;
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
