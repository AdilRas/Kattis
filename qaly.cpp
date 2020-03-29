#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    double a=0, b=0, sum = 0;
    while(cin >> a >> b) sum += (a*b);
    cout << sum << endl;
    return 0;
}