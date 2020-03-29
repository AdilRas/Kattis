#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int s, t, n; cin >> s >> t >> n;
    vi d(n+1);
    vi b(n);
    vi c(n);
    for(int i = 0; i <= n; i++) cin >> d[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) cin >> c[i];
    int curr = s;
    for(int i = 0; i < d.size()-1; i++) {
        curr += d[i];
        while(curr%c[i] != 0) curr++;
        curr += b[i];
    }
    curr += d[d.size()-1];
    if(curr <= t) cout << "yes";
    else cout << "no";
    return 0;
}