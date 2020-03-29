#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    double c; int n;
    cin >> c >> n;
    double sum = 0;
    while(n--) {
        double a, b;
        cin >> a >> b;
        sum += (a*b);
    }
    printf("%.8f\n", (sum*c));
    return 0;
}