#define USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define all(a) a.begin(), a.end()
#define rd(a)         \
    for (auto &i : a) \
        cin >> i;

ll INF = 1e15;
ll MOD = 1e9 + 7;

vector<ll> p, sz;

int find(ll u)
{
    if (u == p[u])
        return u;
    return p[u] = find(p[u]);
}

void unite(ll u, ll v)
{
    u = find(u);
    v = find(v);
    if (sz[v] > sz[u])
    {
        swap(u, v);
    }
    p[v] = u;
    sz[u] += sz[v];
}
void solve()
{

    ll n, m;
    cin >> n >> m;
    p.resize(n);
    sz.resize(n, 1);
    for (int i = 0; i < n; i++)
    {
        p[i] = i;
    }
    vector<set<ll>> q(n);
    bool r = true;
    for (int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        if (k > 0)
        {
            r = false;
        }
        for (int j = 0; j < k; j++)
        {
            ll t;
            cin >> t;
            q[i].insert(t);
        }
    }
    if (r)
    {
        cout << n;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (find(i) != find(j))
            {
                for (auto c : q[i])
                {
                    if (q[j].find(c) != q[j].end())
                    {
                        unite(i, j);
                        break;
                    }
                }
            }
        }
    }
    set<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.insert(find(i));
    }
    cout << ans.size() - 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}
