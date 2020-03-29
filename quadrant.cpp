#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b; cin >> a >> b;
    bool x, y; x= a>0; y=b>0;
    if(x&&y) cout << 1;
    else if(x) cout << 4;
    else if(y) cout << 2;
    else cout << 3;    
    return 0;
}