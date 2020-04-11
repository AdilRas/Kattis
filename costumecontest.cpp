#include<bits/stdc++.h>

using namespace std;

map<string, int> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    while(n--) {
        string a; cin >> a;
        mp[a]++;
    }
    //cout << mp.size() << endl;
    int best =  INT_MAX;
    for(auto i : mp) {
        best = min(i.second, best);
    }
    for(auto i : mp) {
        if(i.second == best) cout << i.first << endl;
    }
    return 0;
}