#include<iostream>

using namespace std;

int main() {
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