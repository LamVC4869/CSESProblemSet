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
 
vector<string> createGrayCode (int n) {
    if (n == 1) {
        return {"0", "1"};
    }
    vector<string> s1 = createGrayCode(n - 1), s2 = s1;
    reverse(all(s2));
    REP(i, len(s1)) {
        s1[i] = '0' + s1[i];
        s2[i] = '1' + s2[i];
    }
    s1.insert(end(s1), all(s2));
    return s1;
}
 
int main () {
    #ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n; cin >> n;
    vector<string> grayCode = createGrayCode(n);
    REP(i, len(grayCode)) {
        cout << grayCode[i] << '\n';
    }
    cerr << "\nProgram Executed Successfully!\n";
    cerr << "Time elapsed: " << TIME << "s.";
    return 0;
}