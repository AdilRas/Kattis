#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    char p,s;
    int a=0, b=0;
    while(cin >> p >> s) {
        s-='0';
        if(p=='A') a+=s;
        else b+=s;
    }
    cout << (a > b ? "A" : "B") << endl;
    return 0;
}