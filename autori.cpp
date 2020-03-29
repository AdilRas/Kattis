#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    getline(cin, a);
    cout << a[0];
    for(int i = 1; i < a.size(); i++) if(a[i-1] == '-') cout << a[i];
    cout << endl;
    return 0;
}