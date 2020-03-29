#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a; cin >> a;
    while(a--) {
        int i; cin >> i;
        cout << i << " is " << (i%2 == 0 ? "even" : "odd") << endl;
    }
    return 0;
}