#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int i = 0;
    vector<int> dists(n);
    while(i < n) cin >> dists[i++];
    if(n==2) cout << 2*min(dists[0], dists[1]);
    else {
        int best = INT_MAX;
        for(int i = 0; i < n; i++) {
            best= min(best, (dists[i] + dists[(i-2+n)%n]));
        }
        cout << best << endl;
    }
    return 0;
}