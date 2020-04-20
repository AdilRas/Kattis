#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int count = 1;
    while(n--) {
        string curr; cin >> curr;
        if(curr == "mumble") count++;
        else {
            int a = stoi(curr);
            if(a == count) count++;
            else {cout << "something is fishy" << endl; return 0;}
        }
    }
    cout << "makes sense" << endl;
    return 0;
}