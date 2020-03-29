#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a; cin >> a;
    cout << (int)ceil(pow((ceil(pow(2, a))+1), 2)) << endl;
    return 0;
}