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
    /*
    starting ending
    for(i,n)
    {
        currelement=i;

    }
    1 10
    1 2 3 4 5 6 7 8 9 10
    arr[10]={6,2,5,5,4,5,6,3,7,6}

    */
    int a, b, sum = 0;
    cin >> a >> b;
    string s = "";
    for (int i = a; i <= b; i++)
    {
        string k=to_string(i);
        s.append(k);
    }
    // cout << s << ln;
    int n = s.length();
    forn(i, n)
    {
        if (s[i] == '0')
        {
            sum += 6;
        }
        else if (s[i] == '1')
        {
            sum += 2;
        }
        else if (s[i] == '2')
        {
            sum += 5;
        }
        else if (s[i] == '3')
        {
            sum += 5;
        }
        else if (s[i] == '4')
        {
            sum += 4;
        }
        else if (s[i] == '5')
        {
            sum += 5;
        }
        else if (s[i] == '7')
        {
            sum += 3;
        }
        else if (s[i] == '6')
        {
            sum += 6;
        }
        else if (s[i] == '8')
        {
            sum += 7;
        }
        else if (s[i] == '9')
        {
            sum += 6;
        }
    }
    cout << sum;
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