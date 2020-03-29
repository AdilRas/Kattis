#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    while(n--) {
        int a; cin >> a;
        ll res = 1;
        while(a > 0) res *= a--;
        cout << res%10 << endl;
    }
    return 0;
}