#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        int a, b; cin >> b >> a;
        cout << i << " " << a + a * (1 + a) / 2 << endl;
    }
    return 0;
}