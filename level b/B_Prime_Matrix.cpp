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

//function for prime factorization
vector<pair<ll, ll>> pf(ll n)
{
    vector<pair<ll, ll>> prime;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int count = 0;
            while (n % i == 0)
            {
                count++;
                n = n / i;
            }
            prime.pb(mp(i, count));
        }
    }
    if (n > 1)
    {
        prime.pb(mp(n, 1));
    }
    return prime;
}

#define max 1000000
bool arr[max];
vector<ll> prime;
void sieve()
{
    ll i;
    fill(arr, arr + max, true);
    arr[0] = false;
    arr[1] = false;
    for (i = 0; i * i < max; i++)
    {
        if (arr[i] == true)
        {
            prime.pb(i);
            for (ll j = i * i; j < max; j += i)
            {
                arr[j] = false;
            }
        }
    }
    for (ll k = i; k < max; k++)
    {
        if (arr[k] == true)
        {
            prime.pb(k);
        }
    }
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n][m];
    forn(i, n)
    {
        forn(j, m)
        {
            cin >> arr[i][j];
        }
    }

    ll mini_row = INT_MAX, mini_col = INT_MAX;

    forn(i, n)
    {
        ll row = 0;
        forn(j, m)
        {
            ll idx = lower_bound(all(prime), arr[i][j]) - prime.begin();
            row += prime[idx] - arr[i][j];
        }
        mini_row = min(row, mini_row);
    }

    forn(j, m)
    {
        ll col = 0;
        forn(i, n)
        {
            ll idx = lower_bound(all(prime), arr[i][j]) - prime.begin();
            col += prime[idx] - arr[i][j];
        }
        mini_col = min(col, mini_col);
    }
    cout << min(mini_row, mini_col) << ln;
}
int main()
{
    fast_cin();
    sieve();
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
