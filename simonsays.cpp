#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n; cin.ignore();
    while(n--) {
        string a; getline(cin, a);
        if(a.find("Simon says") != string::npos && a.find_first_of("Simon says") == 0) cout << a.substr(10) << endl;
    }
    return 0;
}