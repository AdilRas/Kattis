#include<bits/stdc++.h>

using namespace std;

// Sets the needed bits. bit 0 for dog 1, bit 1 for dog 2
#define IND(p, a, b, c, d) (((p%(a+b))<=a && p%(a+b)!=0) + (((p%(c+d))<=c && p%(c+d)!=0)<<1))
// Can easily be done with if statements. Just being creative here.
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a, b, c, d, p, m, g;
    cin >> a >> b >> c >> d >> p >> m >> g;
    //                  00     01    10     11
    string arr[4] = {"none", "one", "one", "both"};
    cout << arr[IND(p, a, b, c, d)] << endl;
    cout << arr[IND(m, a, b, c, d)] << endl;
    cout << arr[IND(g, a, b, c, d)] << endl;
    return 0;
}