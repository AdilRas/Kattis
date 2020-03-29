#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    while(cin >> a >> b && b != 0) {
        cout << (a/b) << " " << (a%b) << " / " << b << endl;
    }
    return 0;
}