#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a=1, b=0;
    int n; cin >> n;
    while(n--) {
        int oldA = a;
        a = b;
        b += oldA;
    }
    cout << a << " " << b << endl;
    return 0;
}