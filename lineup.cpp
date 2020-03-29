#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    string name;
    vector<string> list(n);
    vector<string> list2(n);
    for(int i = 0; i < n; i++) {
        cin >> name;
        list[i] = name;
        list2[i] = name;
    }
    sort(list.begin(), list.end());
    if(list == list2) {cout << "INCREASING"; return 0; }
    sort(list.rbegin(), list.rend());
    if(list == list2) {cout << "DECREASING"; return 0; }
    cout << "NEITHER" << endl;
    return 0;
}