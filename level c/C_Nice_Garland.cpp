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

// function for prime factorization
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

// sum of digits of a number
ll sumofno(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

// modular exponentiation
long long modpow(long long val, long long deg, long long mod)
{
    if (!deg)
        return 1 % mod;
    if (deg & 1)
        return modpow(val, deg - 1, mod) * val % mod;
    long long res = modpow(val, deg >> 1, mod);
    return (res * res) % mod;
}

const int N = 1e6 + 100;
long long fact[N];
// initialise the factorial
void initfact()
{
    fact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = (fact[i - 1] * i);
        fact[i] %= MOD;
    }
}

// formula for c
ll C(ll n, ll i)
{
    ll res = fact[n];
    ll div = fact[n - i] * fact[i];
    div %= MOD;
    div = modpow(div, MOD - 2, MOD);
    return (res * div) % MOD;
}

// function for fast expo
ll fastexpo(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    if (a == 0)
    {
        return 0;
    }
    ll y = fastexpo(a, b / 2);
    if (b % 2 == 0)
    {
        return y * y;
    }
    else
    {
        return a * y * y;
    }
}

ll popcount(ll n)
{
    ll c = 0;
    for (; n; ++c)
        n &= n - 1;
    return c;
}

ll ce(ll x, ll y)
{
    ll res = x / y;
    if (x % y != 0)
    {
        res++;
    }
    return res;
}

bool pow2(ll x)
{
    ll res = x & (x - 1);
    if (res == 0)
    {
        return true;
    }
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 1)
    {
        cout << 0 << endl;
        cout << s << endl;
    }

    else if (n == 2)
    {
        if (s[0] != s[1])
        {
            cout << 0 << endl;
            cout << s << endl;
        }

        else
        {
            if (s[0] == 'R')
            {
                cout << 1 << endl;
                cout << "RB" << endl;
            }

            else if (s[0] == 'G')
            {
                cout << 1 << endl;
                cout << "GB" << endl;
            }

            else if (s[0] == 'B')
            {
                cout << 1 << endl;
                cout << "BG" << endl;
            }
        }
    }

    else if (n > 2)
    {
        string p1 = "";
        ll cnt1 = 0;
        string ans = "";
        ll cnt = INT_MAX;

        forn(i, n)
        {
            if (i % 3 == 0)
                p1 += 'G';
            else if (i % 3 == 1)
                p1 += 'B';
            else if (i % 3 == 2)
                p1 += 'R';
        }

        forn(i, n)
        {
            if (s[i] != p1[i])
            {
                cnt1++;
            }
        }

        if (cnt1 < cnt)
        {
            cnt = cnt1;
            ans = p1;
        }

        string p2 = "";
        ll cnt2 = 0;

        forn(i, n)
        {
            if (i % 3 == 0)
                p2 += 'G';
            else if (i % 3 == 1)
                p2 += 'R';
            else if (i % 3 == 2)
                p2 += +'B';
        }
        forn(i, n)
        {
            if (s[i] != p2[i])
            {
                cnt2++;
            }
        }

        if (cnt2 < cnt)
        {
            cnt = cnt2;
            ans = p2;
        }

        string p3 = "";
        ll cnt3 = 0;

        forn(i, n)
        {
            if (i % 3 == 0)
                p3 += 'B';
            else if (i % 3 == 1)
                p3 += 'G';
            else if (i % 3 == 2)
                p3 += 'R';
        }

        forn(i, n)
        {
            if (s[i] != p3[i])
            {
                cnt3++;
            }
        }

        if (cnt3 < cnt)
        {
            cnt = cnt3;
            ans = p3;
        }

        string p4 = "";
        ll cnt4 = 0;

        forn(i, n)
        {
            if (i % 3 == 0)
                p4 += 'B';
            else if (i % 3 == 1)
                p4 += 'R';
            else if (i % 3 == 2)
                p4 += 'G';
        }

        forn(i, n)
        {
            if (s[i] != p4[i])
            {
                cnt4++;
            }
        }

        if (cnt4 < cnt)
        {
            cnt = cnt4;
            ans = p4;
        }

        string p5 = "";
        ll cnt5 = 0;

        forn(i, n)
        {
            if (i % 3 == 0)
            {
                p5 += 'R';
            }
            else if (i % 3 == 1)
            {
                p5 += 'B';
            }
            else if (i % 3 == 2)
            {
                p5 += 'G';
            }
        }

        forn(i, n)
        {
            if (s[i] != p5[i])
            {
                cnt5++;
            }
        }

        if (cnt5 < cnt)
        {
            cnt = cnt5;
            ans = p5;
        }

        string p6 = "";
        ll cnt6 = 0;

        forn(i, n)
        {
            if (i % 3 == 0)
            {
                p6 += 'R';
            }
            else if (i % 3 == 1)
            {
                p6 += 'G';
            }
            else if (i % 3 == 2)
            {
                p6 += 'B';
            }
        }

        forn(i, n)
        {
            if (s[i] != p6[i])
            {
                cnt6++;
            }
        }

        if (cnt6 < cnt)
        {
            cnt = cnt6;
            ans = p6;
        }

        cout << cnt << endl;
        cout << ans << endl;
    }
}
int main()
{
    fast_cin();
    ll t = 1;
    //  cin >> t;
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
