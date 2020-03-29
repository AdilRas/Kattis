#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    while(n--) {
        int b; double p;cin >> b >> p;
        cout << 60/(p/(b-1)) << " ";
        cout << 60*b/p <<" ";
        cout << 60/(p/(b+1)) << endl;
    }
    return 0;
}