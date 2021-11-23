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
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            v1.push_back(arr[i]);
        }
        else
        {
            v2.push_back(arr[i]);
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    reverse(v2.begin(), v2.end());
    reverse(v1.begin(), v1.end());
 
    int x = v1.size();
    int y = v2.size();
    int sum = 0;
    if (x > y)
    {
        for (int i = y + 1; i < x; i++)
        {
            sum += v1[i];
        }
    }
    else if (y > x)
    {
        for (int i = x + 1; i < y; i++)
        {
            sum += v2[i];
        }
    }
    else
    {
        sum = 0;
    }
 
    cout << sum << ln;
      


}
int main()
{
 fast_cin();
//  ll t;
//  cin >> t;
//  for(int it=1;it<=t;it++) {
//  cout << "Case #" << it+1 << ": ";
 solve();
//  }
 return 0;
}