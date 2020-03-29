#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int sum = 0;
    while(n--) {
        int a; cin >> a;
        if(a < 0) sum += abs(a);
    }
    cout << sum << endl;
    return 0;
}