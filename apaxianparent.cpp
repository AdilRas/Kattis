#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    cin >> a >> b;
    string vow = "aeiou";
    if(a.substr(a.size()-2) == "ex") cout << a << b;
    else if(vow.find(a[a.size()-1]) == string::npos) cout << a << "ex" << b;
    else cout << a.substr(0, a.size()-1) << "ex" << b;
    return 0;
}