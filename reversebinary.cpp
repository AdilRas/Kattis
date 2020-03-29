#include<bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int b = 0;
    while(n > 0) {
        b <<= 1;
        if(n%2) b++;
        n >>= 1;
    }
    cout << b << endl;
    return 0;
}