#include<bits/stdc++.h>

using namespace std;

vector<unordered_map<int, long double>> adj;
vector<long double> dist;
vector<bool> vis;
int nodes, edges;

priority_queue<pair<long double, int>> q;

double solve() {
    vis.clear(); vis.resize(nodes, false);
    dist.clear(); dist.resize(nodes, 0);
    q = priority_queue<pair<long double, int>>();
    dist[0] = 1.0;
    q.push({1.0, 0});
    while(!q.empty()) {
        int curr = q.top().second;
        long double dtq = q.top().first;
        q.pop();
        if(vis[curr]) continue;
        vis[curr] = true;
        dist[curr] = dtq;
        if(curr == dist.size()-1) return dist[curr];
        for(auto i : adj[curr]) {
            q.push({i.second*dist[curr], i.first});
        }
    }
    return dist[dist.size()-1];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> nodes >> edges && (nodes != 0)) {
        adj.clear(); adj.resize(nodes);
        for(int i = 0; i < edges; i++) {
            int a, b; double v; cin >> a >> b >> v;
            adj[a][b] = v;
            adj[b][a] = v;
        }
        cout << fixed << setprecision(4) << solve() << endl;
    }
    return 0;
}