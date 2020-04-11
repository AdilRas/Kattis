#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string, set<string>> mp;
    string f, l;
    unordered_map<string, int> firsts;
    while(cin >> f >> l) {
        mp[l].insert(f);
        firsts[f]++;
    }
    for(auto i : mp) {
        string last = i.first;
        for(auto name : i.second) {
            cout << name;
            if(firsts[name] > 1) {
                cout << " " << last;
            }
            cout << endl;
        }
    }
    return 0;
}