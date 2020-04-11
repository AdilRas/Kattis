#include<bits/stdc++.h>

using namespace std;
typedef pair<int, int> pt;

double calc(pt a, pt b, pt c) {
    return fabs(
        a.first * (b.second - c.second) + 
        b.first * (c.second - a.second) + 
        c.first * (a.second - b.second)
    ) / 2.0;    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    pt a, b, c;
    cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second;
    int n; cin >> n;
    int sum = 0;
    double area = calc(a, b, c);
    cout << fixed << setprecision(1) << area << endl;
    while(n--) {
        pt check; cin >> check.first >> check.second;
        if(fabs(calc(a, b, check) + calc(a, check, c) + calc(check, b, c) - area) <= 1e-10) sum++;
    }
    cout << sum << endl;
    return 0;
}