#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int t; cin >>t;
    int left = 0;
    while(t--) {
        int curr; cin >> curr;
        left += (n-curr);
    }
    cout << left+n << endl;
    return 0;
}