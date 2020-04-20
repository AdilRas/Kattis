#include<bits/stdc++.h>

using namespace std;

#define um unordered_map
#define v vector
#define pb push_back
typedef long long ll;
typedef vector<ll> vll;
typedef vector<ll> vi;
typedef unordered_map<ll, ll> umll;

vll dist;
um<ll, umll> bestEdge;  // adj list that gives the min edge weight between any 2 nodes.
v<vll> par;             // All of the parents of an edge which are used in the shortest path
v<v<pair<ll, ll>>> adj; // Adjacency list (complete)
ll p, t;                // #points, #trails
vi vis;                 // Used to track which nodes are fully processed

ll getAllShortestPathWeights() {
    vis.clear();
    vis.resize(p, 0);
    ll totalCost = 0;
    queue<ll> q;
    q.push(p-1);                // Start from the back and sum the weight of all used edges.
    while(!q.empty()) {
        ll curr = q.front(); q.pop();
        if(vis[curr]) continue;
        vis[curr] = true;
        for(auto i : par[curr]) {
            totalCost += bestEdge[curr][i];
            q.push(i);
        }
    }
    return totalCost;
}

void djikstra() {
    priority_queue<pair<ll, ll>, v<pair<ll, ll>>, greater<pair<ll, ll>> > q;
    q.push({0, 0});

    while(!q.empty()) {
        ll curr = q.top().second; q.pop();
        if(vis[curr]) continue;
        vis[curr] = true;

        for(auto e : adj[curr]) {
            ll wt = e.first;
            ll next = e.second;
            if(dist[curr] + wt < dist[next]) {
                dist[next] = dist[curr] + wt;
                par[next].clear();
                par[next].pb(curr);
                q.push({dist[next], next});
            } else if(dist[curr]+wt == dist[next]) {
                par[next].pb(curr);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> p >> t;
    dist.resize(p, INT_MAX);
    par.resize(p);
    adj.resize(p);
    vis.resize(p, false);
    dist[0] = 0;
    ll a, b, wt;
    for(int i = 0; i < t; i++) {
        cin >> a >> b >> wt;
        if(a == b) continue;
        adj[a].pb({wt, b});
        adj[b].pb({wt, a});
        if(bestEdge.count(a) == 0 || bestEdge[a].count(b) == 0) {
            bestEdge[a][b] = wt;
            bestEdge[b][a] = wt;
        } else {
            bestEdge[a][b] = min(bestEdge[a][b], wt);
            bestEdge[b][a] = min(bestEdge[b][a], wt);
        }
    }
    djikstra();
    cout << 2 * getAllShortestPathWeights() << endl;
}