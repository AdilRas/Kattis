#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int c, ma=-1, mi=100;
        while(n--) {
            cin >> c;
            ma = max(ma, c);
            mi = min(mi, c);
        }
        cout << (ma-mi)*2 << endl;
    }
    return 0;
}