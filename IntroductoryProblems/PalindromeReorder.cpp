#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define setup(a, c) memset(a, c, sizeof(a))
#define REP(i, n) for(int i = 0, _n = (n); i < _n; ++i)
#define FOR(i, a, b) for(int i = (a), _b = (b); i <= _b; ++i)
#define FOD(i, a, b) for(int i = (a), _b = (b); i >= _b; --i)
#define fi first
#define se second
#define len(s) s.size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define MASK(i) (1LL << (i))
#define BIT(x, i) (((x) >> (i)) & 1)
#define TIME (1.0*clock()/CLOCKS_PER_SEC)

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef unsigned long long ull;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int MOD = (int)1e9 + 7;
const ll INF = (ll)1e18 + 22072005;

void solve (string s) {
    unordered_map<char, int> mp;
    for (const char& c : s) {
        mp[c]++;
    }
    int check = 0;
    for (const auto& it : mp) {
        check += it.second & 1;
    }
    if (check > 1) {
        cout << "NO SOLUTION";
        return;
    }
    string ans, mid, rmd;
    for (const auto& it : mp) {
        if (it.second % 2 == 0) {
            ans += string(it.second/2, it.first);
        }
        else {
            mid = string(it.second, it.first);
        }
    }
    rmd = ans;
    reverse(all(rmd));
    cout << ans << mid << rmd;
}

int main () {
    #ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s; cin >> s;
    solve(s);
    cerr << "\nProgram Executed Successfully!\n";
    cerr << "Time elapsed: " << TIME << "s.";
    return 0;
}