#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a; cin >> a;
    cout << (a.find("ss") == string::npos ? "no hiss" : "hiss") << endl;
    return 0;
}