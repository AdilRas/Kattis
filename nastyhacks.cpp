#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    while(n--) {
        int a, b, c; cin >> a >> b >> c;
        if(b-c > a)         cout << "advertise" << endl;
        else if(b-c < a)    cout << "do not advertise" << endl;
        else                cout << "does not matter" << endl;
    }
    return 0;
}