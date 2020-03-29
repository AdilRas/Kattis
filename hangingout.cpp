#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m, n; cin >> m >> n;
    int curr = 0;
    int denied = 0;
    while(n--) {
        string type; int num;
        cin >> type >> num;
        if(type == "enter") 
            if(curr+num > m) denied++;
            else curr += num;
        else
            curr -= num;
    }
    cout << denied << endl;
    return 0;
}