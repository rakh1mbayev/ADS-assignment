 
    // by rakhimbayev
 
#include <bits/stdc++.h>

#define fi first
#define se second
#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
 
using namespace std;
 
const int E9 = (int) 1e9;
const int N = (int) 5e5+7;
const ll INF = (ll) 1e18;

int a[N];

// complexity: linear - O(N)

int solve(int n)
{
    int res = E9;
    for (int i = 1; i <= n; ++i)
    {
        res = min(res, a[i]);
    }
    return res;
}

int main() 
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    cout << solve(n);
}