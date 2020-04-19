#include<bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define pb push_back
#define LSB(x) ((x)&(-x))
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<ll> vll;
typedef vector<vd> vvd;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, int> psi;
typedef map<int,int> mpii;
typedef set<int> seti;
typedef set<double> setd;
typedef multiset<int> mseti;
typedef deque<int> dqi;
typedef deque<double> dqd;
typedef unordered_map<int, int> umii;
typedef unordered_map<ll, ll> umll;
typedef unordered_set<int> usi;
typedef unordered_set<ll> usl;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    vvi adj(n+1);
    vi deg(n+1, 0);
    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].pb(v);
        deg[v]++;
    }
    queue<int> q;
    for(int i= 1; i <= n; i++) {
        if(deg[i] == 0) q.push(i);
    }

    vi done;
    while(!q.empty()) {
        auto curr = q.front(); q.pop();
        done.pb(curr);
        for(auto i : adj[curr]) {
            if(--deg[i] == 0) q.push(i);
        }
    }

    if(done.size() != n)
        cout << "IMPOSSIBLE" << endl;
    else
        for(auto i : done) cout << i << endl;
    
    return 0;
}