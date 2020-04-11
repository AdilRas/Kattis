#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int sum = 0;
    while(n--) {
        string a; cin >> a;
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        if(a.find("rose") != string::npos || a.find("pink") != string::npos) sum++;
    }
    cout << (sum > 0 ? to_string(sum) : "I must watch Star Wars with my daughter") << endl;
    return 0;
}