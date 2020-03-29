#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, h, w;
    cin >> n >> h >> w;
    cout << max(n-h, h)*max(n-w, w)*4 << endl;
    return 0;
}