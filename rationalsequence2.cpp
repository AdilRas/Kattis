#include<bits/stdc++.h>

using namespace std;

int f(int l, int r) {
    if(l == r) return 1;
    else if(l > r) return 2 * f(l-r, r) + 1;
    else if(l < r) return 2 * f(l, r-l);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int t; cin >> t; cout << t << " ";
        int l, r;
        cin >> l; cin.ignore(); cin >> r;
        cout << f(l, r) << endl;
    }
}